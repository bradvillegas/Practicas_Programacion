// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 9
// Problema planteado: Generar N números aleatorios

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la cantidad de números aleatorios: ";
    cin >> n;
    srand(time(0));
    int suma = 0, mayor = 0, menor = 1001;
    for (int i = 0; i < n; i++)
    {
        int num = rand() % 1000 + 1;
        suma += num;
        if (num > mayor)
        {
            mayor = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << suma / n << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;
    return 0;
}
