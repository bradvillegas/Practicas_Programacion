// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 3
// Problema planteado: Invertir una cadena utilizando recursividad

#include <iostream>
using namespace std;

void InvertirCadena(string cadena, int indice);

int main()
{
    string cadena;
    cin >> cadena;
    InvertirCadena(cadena, cadena.length() - 1);
    cout << endl;
    return 0;
}

void InvertirCadena(string cadena, int indice)
{
    if (indice < 0)
    {
        return;
    }
    cout << cadena[indice];
    InvertirCadena(cadena, indice - 1);
}
