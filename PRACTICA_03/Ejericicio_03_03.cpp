// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 3
// Problema planteado: Determinar si un número es capicúa

#include <iostream>
using namespace std;

bool esCapicua(int numero)
{
    int original = numero, invertido = 0;
    while (numero > 0)
    {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    return original == invertido;
}

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (esCapicua(numero))
    {
        cout << "El número " << numero << " es capicúa." << endl;
    }
    else
    {
        cout << "El número " << numero << " no es capicúa." << endl;
    }
    return 0;
}
