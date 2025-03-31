// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 9
// Problema planteado: Almacenar en un arreglo las edades de varias personas (hasta ingresar un -1) y calcular la desviación típica.

#include <iostream>
#include <cmath>
using namespace std;

void LeerEdades(int edades[], int& N);
double CalcularPromedio(int edades[], int N);
double CalcularDesviacionTipica(int edades[], int N, double promedio);

int main() 
{
    const int MAX = 100;
    int edades[MAX];
    int N = 0;

    LeerEdades(edades, N);
    double promedio = CalcularPromedio(edades, N);
    double desviacionTipica = CalcularDesviacionTipica(edades, N, promedio);

    cout << "Promedio de las edades: " << promedio << endl;
    cout << "Desviación típica de las edades: " << desviacionTipica << endl;

    return 0;
}

void LeerEdades(int edades[], int& N) 
{
    int edad;
    cout << "Ingrese las edades (ingrese -1 para terminar):\n";
    while (true) {
        cin >> edad;
        if (edad == -1) break;
        edades[N++] = edad;
    }
}

double CalcularPromedio(int edades[], int N) 
{
    double suma = 0;
    for (int i = 0; i < N; i++) 
    {
        suma += edades[i];
    }
    return suma / N;
}

double CalcularDesviacionTipica(int edades[], int N, double promedio) 
{
    double suma = 0;
    for (int i = 0; i < N; i++) 
    {
        suma += pow(edades[i] - promedio, 2);
    }
    return sqrt(suma / N);
}
