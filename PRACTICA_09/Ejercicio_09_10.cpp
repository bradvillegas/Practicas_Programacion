// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 10
// Problema planteado: Calcular el coeficiente binomial de forma recursiva

#include <iostream>
using namespace std;

int Binomial(int n, int m);

int main()
{
    int n, m;
    cin >> n >> m;
    cout << Binomial(n, m) << endl;
    return 0;
}

int Binomial(int n, int m)
{
    if (m == 0 || m == n)
    {
        return 1;
    }
    return Binomial(n - 1, m - 1) + Binomial(n - 1, m);
}
