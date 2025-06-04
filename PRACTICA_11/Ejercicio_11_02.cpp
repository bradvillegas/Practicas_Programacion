// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 2
// Problema planteado: Contador de palabras en un archivo

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int contarPalabras();

int main()
{
    system("cls");

    int total = contarPalabras();
    cout << "Total de palabras: " << total << endl;

    return 0;
}

int contarPalabras()
{
    ifstream archivo("texto.txt");
    string palabra;
    int contador = 0;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return 0;
    }

    while (archivo >> palabra)
    {
        contador++;
    }

    archivo.close();

    return contador;
}