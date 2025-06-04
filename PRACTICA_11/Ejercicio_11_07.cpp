// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 7
// Problema planteado: Promedio de calificaciones por estudiante

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void calcularPromedios();

int main()
{
    system("cls");

    calcularPromedios();

    cout << "Promedios generados correctamente." << endl;

    return 0;
}

void calcularPromedios()
{
    ifstream archivoIn("calificaciones.txt");
    ofstream archivoOut("promedios.txt");
    string linea, nombre;
    float nota, suma;
    int cantidad;

    if (archivoIn.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    while (getline(archivoIn, linea))
    {
        istringstream iss(linea);
        iss >> nombre;
        suma = 0;
        cantidad = 0;

        while (iss >> nota)
        {
            suma += nota;
            cantidad++;
        }

        float promedio = cantidad > 0 ? suma / cantidad : 0;
        archivoOut << nombre << " " << promedio << endl;
    }

    archivoIn.close();
    archivoOut.close();
}
