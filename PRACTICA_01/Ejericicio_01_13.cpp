// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 13
// Problema planteado: Mostrar un número entero al revés
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    while (num != 0) 
    {
        cout << num % 10;
        num /= 10;
    }
    cout << endl;
    return 0;
}
