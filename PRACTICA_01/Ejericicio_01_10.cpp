// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 10
// Problema planteado: Calcular la cantidad de dígitos de un número entero
#include <iostream>
using namespace std;
int main() 
{
    int num, count = 0;
    cout << "Ingrese un número entero: ";
    cin >> num;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    cout << "El número tiene " << count << " dígitos." << endl;
    return 0;
}
