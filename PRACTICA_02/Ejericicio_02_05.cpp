// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 5
// Problema planteado: Generar un número aleatorio entre 1 y 10 y calcular su factorial

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numero, factorial = 1;
    srand(time(0));
    numero = rand() % 10 + 1;
    cout << "El número aleatorio es: " << numero << endl;
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    cout << "El factorial de " << numero << " es: " << factorial << endl;
    return 0;
}
