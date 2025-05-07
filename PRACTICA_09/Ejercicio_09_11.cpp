// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 11
// Problema planteado: Conjetura de Ullman con recursividad

#include <iostream>
using namespace std;

void ConjeturaUllman(int n);

int main()
{
    int n;
    cin >> n;
    ConjeturaUllman(n);
    return 0;
}

void ConjeturaUllman(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        ConjeturaUllman(n / 2);
    }
    else
    {
        ConjeturaUllman(n * 3 + 1);
    }
}
