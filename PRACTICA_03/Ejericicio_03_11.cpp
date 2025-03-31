// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 11
// Problema planteado: Evaluar la serie de Collatz

#include <iostream>
using namespace std;

int calcularPasosCollatz(int n)
{
    int pasos = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        pasos++;
    }
    return pasos;
}

int main()
{
    int numero;
    cout << "Ingrese un número para la serie de Collatz: ";
    cin >> numero;
    int pasos = calcularPasosCollatz(numero);
    cout << "La cantidad de pasos necesarios para llegar a 1 es: " << pasos << endl;
    return 0;
}
