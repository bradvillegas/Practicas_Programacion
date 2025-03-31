// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string numero;
    int base, resultado = 0;
    cout << "Ingrese el número en base n: ";
    cin >> numero;
    cout << "Ingrese la base: ";
    cin >> base;
    int longitud = numero.length();
    for (int i = 0; i < longitud; i++)
    {
        int digito = numero[i] - '0';
        resultado += digito * pow(base, longitud - 1 - i);
    }
    cout << "El número en base 10 es: " << resultado << endl;
    return 0;
}
