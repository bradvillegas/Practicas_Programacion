// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 12
// Problema planteado: Calcular cuántos pares de conejos podrá vender el granjero al cabo de un año

#include <iostream>
using namespace std;

int Conejos(int n);

int main()
{
    int meses = 12;
    cout << Conejos(meses) << endl;
    return 0;
}

int Conejos(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return Conejos(n - 1) + Conejos(n - 2);
}
