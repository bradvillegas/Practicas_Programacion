// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 2
// Problema planteado: Calcular la potencia de un número usando recursividad

#include <iostream>
using namespace std;

int Potencia(int base, int exponente);

int main()
{
    int a, n;
    cin >> a >> n;
    cout << Potencia(a, n) << endl;
    return 0;
}

int Potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    return base * Potencia(base, exponente - 1);
}
