// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 3
// Problema planteado: Almacenamiento de registros de estudiantes

#include <iostream>
#include <fstream>
using namespace std;

void registrarEstudiantes();
void mostrarEstudiantes();

int main()
{
    system("cls");

    registrarEstudiantes();
    mostrarEstudiantes();

    return 0;
}

void registrarEstudiantes()
{
    ofstream archivo("estudiantes.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string nombre;
    int edad;
    float promedio;
    char continuar;

    do
    {
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;

        archivo << nombre << " " << edad << " " << promedio << endl;

        cout << "¿Desea ingresar otro estudiante? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    archivo.close();
}

void mostrarEstudiantes()
{
    ifstream archivo("estudiantes.txt");
    string nombre;
    int edad;
    float promedio;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    cout << "\nListado de estudiantes:\n";

    while (archivo >> nombre >> edad >> promedio)
    {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Promedio: " << promedio << endl;
    }

    archivo.close();
}
