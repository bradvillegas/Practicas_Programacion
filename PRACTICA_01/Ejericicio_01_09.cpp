// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 9
// Problema planteado: Mostrar los primeros 100 números primos
#include <iostream>
using namespace std;
bool esPrimo(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}
int main() 
{
    int count = 0, num = 2;
    while (count < 100) 
    {
        if (esPrimo(num)) 
        {
            cout << num << " ";
            count++;
        }
        num++;
    }
    return 0;
}
