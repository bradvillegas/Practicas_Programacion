// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 1
// Problema planteado: Determinar si un número es par o impar

#include <iostream>
using namespace std;

bool esPar(int numero)
{
    return numero % 2 == 0;
}

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (esPar(numero))
    {
        cout << "El numero " << numero << " es par." << endl;
    }
    else
    {
        cout << "El numero " << numero << " es impar." << endl;
    }
    return 0;
}
