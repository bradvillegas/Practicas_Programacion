// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 7
// Problema planteado: Declarar un vector de diez elementos enteros y pedir números para llenarlo 
// hasta que se llene el vector o se introduzca un número negativo. Luego imprimir el vector.

#include <iostream>
using namespace std;

void LlenarVector(int vector[], int& N);
void DesplegarVector(int vector[], int N);

int main() 
{
    const int MAX = 10;
    int vector[MAX];
    int N = 0;

    LlenarVector(vector, N);
    DesplegarVector(vector, N);

    return 0;
}

void LlenarVector(int vector[], int& N) 
{
    int num;
    cout << "Ingrese los números para llenar el vector (número negativo para terminar):\n";
    while (N < 10) 
    {
        cin >> num;
        if (num < 0) break;
        vector[N++] = num;
    }
}

void DesplegarVector(int vector[], int N) 
{
    cout << "Contenido del vector:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
