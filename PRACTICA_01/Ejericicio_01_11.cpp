// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 11
// Problema planteado: Multiplicar dos números enteros sin usar el operador de multiplicación
#include <iostream>
using namespace std;
int multiplicar(int a, int b) 
{
    int resultado = 0;
    for (int i = 0; i < b; i++) 
    {
        resultado += a;
    }
    return resultado;
}
int main() 
{
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "El resultado de la multiplicación es: " << multiplicar(a, b) << endl;
    return 0;
}
