// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 10
// Problema planteado: Generar N números aleatorios entre 1 y 10000

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, primos = 0;
    cout << "Ingrese la cantidad de números aleatorios: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        int num = rand() % 10000 + 1;
        if (esPrimo(num))
        {
            primos++;
        }
    }
    cout << "Cantidad de números primos generados: " << primos << endl;
    return 0;
}
