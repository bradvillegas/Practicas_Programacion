// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 12
// Problema planteado: Verificar si un número es múltiplo de otro
#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    if (a % b == 0 || b % a == 0) 
    {
        cout << "Uno de los números es múltiplo del otro." << endl;
    } else {
        cout << "Ningún número es múltiplo del otro." << endl;
    }
    return 0;
}
