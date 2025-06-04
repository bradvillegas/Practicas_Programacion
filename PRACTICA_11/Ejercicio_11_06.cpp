// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 6
// Problema planteado: Filtrado de registros de temperatura

#include <iostream>
#include <fstream>
using namespace std;

void filtrarTemperaturas(float umbral);

int main()
{
    system("cls");

    float n;
    cout << "Ingrese el umbral de temperatura: ";
    cin >> n;

    filtrarTemperaturas(n);

    cout << "Archivo filtrado generado correctamente." << endl;

    return 0;
}

void filtrarTemperaturas(float umbral)
{
    ifstream archivoIn("temperaturas.txt");
    ofstream archivoOut("altas_temperaturas.txt");
    string ciudad;
    float temp;

    if (archivoIn.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    while (archivoIn >> ciudad >> temp)
    {
        if (temp > umbral)
        {
            archivoOut << ciudad << " " << temp << endl;
        }
    }

    archivoIn.close();
    archivoOut.close();
}
