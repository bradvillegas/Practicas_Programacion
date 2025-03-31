// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 8
// Problema planteado: Generar pirámides numéricas

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

