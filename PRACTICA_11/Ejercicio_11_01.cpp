// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 1
// Problema planteado: Escritura y lectura básica de archivos

#include <iostream>
#include <fstream>
using namespace std;

void escribirNombres();
void leerNombres();

int main()
{
    system("cls");

    escribirNombres();
    leerNombres();

    return 0;
}

void escribirNombres()
{
    ofstream archivo("nombres.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string nombre;
    char continuar;

    do
    {
        cout << "Ingrese un nombre: ";
        cin >> nombre;
        archivo << nombre << endl;
        cout << "¿Desea ingresar otro nombre? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    archivo.close();
}

void leerNombres()
{
    ifstream archivo("nombres.txt");
    string linea;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    cout << "\nNombres registrados:\n";

    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }

    archivo.close();
}