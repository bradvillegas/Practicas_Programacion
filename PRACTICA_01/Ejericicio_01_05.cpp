// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 5
// Problema planteado: Verificar si un número es primo
#include <iostream>
using namespace std;
int main() 
{
    int num;
    bool esPrimo = true;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num <= 1) 
    {
        esPrimo = false;
    } else 
    {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo) 
    {
        cout << num << " es un número primo." << endl;
    } else 
    {
        cout << num << " no es un número primo." << endl;
    }
    return 0;
}
