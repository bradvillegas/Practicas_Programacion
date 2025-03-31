// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 10
// Problema planteado: Calcular una serie matemática

#include <iostream>
using namespace std;

int calcularSerie(int n)
{
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i * i;
    }
    return suma;
}

int main()
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int resultado = calcularSerie(n);
    cout << "El resultado de la serie es: " << resultado << endl;
    return 0;
}
