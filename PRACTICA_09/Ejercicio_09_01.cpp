// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 1
// Problema planteado: Sumar los dígitos de un número entero positivo de forma recursiva

#include <iostream>
using namespace std;

int SumarDigitos(int n);

int main()
{
    int numero;
    cin >> numero;
    cout << SumarDigitos(numero) << endl;
    return 0;
}

int SumarDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + SumarDigitos(n / 10);
}
