// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 4
// Problema planteado: Registro de estudiantes con notas de habilitación, eliminación de registros y reporte final con promedio y estado.

#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Estudiante
{
    char ci[15];
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;
};

struct NotaHabilitacion
{
    char ci[15];
    char materia[30];
    int paralelo;
    float nota1;
    float nota2;
    float nota3;
};

void AdicionarEstudiante(string);
void ListadoEstudiantesHabilitados(string, string);
void EliminarEstudiante(string);
void AdicionarNotasHabilitacion(string);

int main()
{
    string archivoEst = "ESTUDIANTES.BIN";
    string archivoNotas = "HABILITACION.BIN";
    int opcion;

    do
    {
        cout << "\n--- MENU NOTAS UCB ---\n";
        cout << "1. Adicionar Estudiante\n";
        cout << "2. Listado de Estudiantes Habilitados\n";
        cout << "3. Eliminar una Estudiante\n";
        cout << "4. Adicionar notas habilitacion\n";
        cout << "0. SALIR\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            AdicionarEstudiante(archivoEst);
            break;
        case 2:
            ListadoEstudiantesHabilitados(archivoEst, archivoNotas);
            break;
        case 3:
            EliminarEstudiante(archivoEst);
            break;
        case 4:
            AdicionarNotasHabilitacion(archivoNotas);
            break;
        case 0:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
        }

    } while (opcion != 0);

    return 0;
}

void AdicionarEstudiante(string NombreArchivo)
{
    Estudiante e;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::app);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    cout << "\n--- Adicionar Estudiante ---\n";
    cout << "CI: ";
    cin.getline(e.ci, 15);
    cout << "Nombres: ";
    cin.getline(e.nombres, 30);
    cout << "Apellidos: ";
    cin.getline(e.apellidos, 30);
    cout << "Materia: ";
    cin.getline(e.materia, 30);
    cout << "Paralelo: ";
    cin >> e.paralelo;
    cin.ignore();

    archivo.write((char *)&e, sizeof(Estudiante));
    archivo.close();

    cout << "Estudiante registrado correctamente.\n";
}

void EliminarEstudiante(string NombreArchivo)
{
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);

    ofstream temp;
    temp.open("TEMP.BIN", ios::binary);

    if (archivo.fail() || temp.fail())
    {
        cout << "Error al abrir los archivos\n";
        return;
    }

    Estudiante e;
    char ciEliminar[15];
    bool encontrado = false;

    cout << "Ingrese el CI del estudiante a eliminar: ";
    cin.getline(ciEliminar, 15);

    while (archivo.read((char *)&e, sizeof(Estudiante)))
    {
        if (strcmp(e.ci, ciEliminar) != 0)
        {
            temp.write((char *)&e, sizeof(Estudiante));
        }
        else
        {
            encontrado = true;
        }
    }

    archivo.close();
    temp.close();

    remove(NombreArchivo.c_str());
    rename("TEMP.BIN", NombreArchivo.c_str());

    if (encontrado)
    {
        cout << "Estudiante eliminado exitosamente.\n";
    }
    else
    {
        cout << "Estudiante no encontrado.\n";
    }
}

void AdicionarNotasHabilitacion(string NombreArchivo)
{
    NotaHabilitacion n;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::app);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo de notas\n";
        return;
    }

    cout << "\n--- Adicionar Notas de Habilitacion ---\n";
    cout << "CI: ";
    cin.getline(n.ci, 15);
    cout << "Materia: ";
    cin.getline(n.materia, 30);
    cout << "Paralelo: ";
    cin >> n.paralelo;
    cout << "Nota 1: ";
    cin >> n.nota1;
    cout << "Nota 2: ";
    cin >> n.nota2;
    cout << "Nota 3: ";
    cin >> n.nota3;
    cin.ignore();

    archivo.write((char *)&n, sizeof(NotaHabilitacion));
    archivo.close();

    cout << "Notas registradas correctamente.\n";
}

void ListadoEstudiantesHabilitados(string ArchivoEst, string ArchivoNotas)
{
    ifstream archivoEst(ArchivoEst, ios::binary);
    ifstream archivoNotas(ArchivoNotas, ios::binary);

    if (archivoEst.fail() || archivoNotas.fail())
    {
        cout << "Error al abrir los archivos\n";
        return;
    }

    Estudiante e;
    NotaHabilitacion n;
    float promedioTotal = 0;
    int cantidadEstudiantes = 0;

    cout << "\n--- LISTADO DE ESTUDIANTES HABILITADOS ---\n";

    while (archivoEst.read((char *)&e, sizeof(Estudiante)))
    {
        archivoNotas.clear();
        archivoNotas.seekg(0, ios::beg);
        bool encontrado = false;

        while (archivoNotas.read((char *)&n, sizeof(NotaHabilitacion)))
        {
            if (strcmp(e.ci, n.ci) == 0 && strcmp(e.materia, n.materia) == 0 && e.paralelo == n.paralelo)
            {
                float promedio = (n.nota1 + n.nota2 + n.nota3) / 3;
                promedioTotal += promedio;
                cantidadEstudiantes++;

                cout << "CI: " << e.ci << endl;
                cout << "Nombres: " << e.nombres << endl;
                cout << "Apellidos: " << e.apellidos << endl;
                cout << "Materia: " << e.materia << endl;
                cout << "Paralelo: " << e.paralelo << endl;
                cout << "Nota 1: " << n.nota1 << endl;
                cout << "Nota 2: " << n.nota2 << endl;
                cout << "Nota 3: " << n.nota3 << endl;
                cout << "Promedio: " << promedio << endl;

                if (n.nota1 >= 60 && n.nota2 >= 60 && n.nota3 >= 60)
                    cout << "Estado: HABILITADO" << endl;
                else
                    cout << "Estado: NO HABILITADO" << endl;

                cout << "-----------------------------\n";

                encontrado = true;
                break;
            }
        }

        if (!encontrado)
        {
            cout << "CI: " << e.ci << endl;
            cout << "Nombres: " << e.nombres << endl;
            cout << "Apellidos: " << e.apellidos << endl;
            cout << "Materia: " << e.materia << endl;
            cout << "Paralelo: " << e.paralelo << endl;
            cout << "Estado: SIN NOTAS" << endl;
            cout << "-----------------------------\n";
        }
    }

    archivoEst.close();
    archivoNotas.close();

    if (cantidadEstudiantes > 0)
    {
        float promedioGeneral = promedioTotal / cantidadEstudiantes;
        cout << "\nPromedio General: " << promedioGeneral << endl;
    }
    else
    {
        cout << "\nNo hay estudiantes con notas registradas.\n";
    }
}