// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 6
// Problema planteado: Calcular el máximo común divisor usando el algoritmo de Euclides de forma recursiva

#include <iostream>
using namespace std;

int MCD(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << MCD(a, b) << endl;
    return 0;
}

int MCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return MCD(b, a % b);
}
