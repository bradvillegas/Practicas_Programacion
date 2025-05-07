// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 9
// Problema planteado: Implementar una función recursiva sin definición explícita dada

#include <iostream>
using namespace std;

int Funcion(int n);

int main()
{
    int n;
    cin >> n;
    cout << Funcion(n) << endl;
    return 0;
}

int Funcion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return Funcion(n - 1) + n;
}
