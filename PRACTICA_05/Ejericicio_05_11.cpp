// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 11
// Problema planteado: Determinar las ventas máximas, el total de ventas y los meses con ventas máximas.

#include <iostream>
#include <string>
using namespace std;

void LeerVentas(double ventas[], int N);
void MostrarMaximasVentas(double ventas[], int N);
void MostrarTotalVentas(double ventas[], int N);

int main() {
    const int N = 12;
    double ventas[N];

    LeerVentas(ventas, N);
    MostrarMaximasVentas(ventas, N);
    MostrarTotalVentas(ventas, N);

    return 0;
}

void LeerVentas(double ventas[], int N) 
{
    cout << "Ingrese las ventas mensuales (12 meses):\n";
    for (int i = 0; i < N; i++) 
    {
        cout << "Mes " << i + 1 << ": ";
        cin >> ventas[i];
    }
}

void MostrarMaximasVentas(double ventas[], int N) 
{
    double maxVenta = ventas[0];
    int mesMax = 0;
    for (int i = 1; i < N; i++) 
    {
        if (ventas[i] > maxVenta) 
        {
            maxVenta = ventas[i];
            mesMax = i;
        }
    }
    cout << "La venta máxima fue de " << maxVenta << " en el mes " << mesMax + 1 << endl;
}

void MostrarTotalVentas(double ventas[], int N) 
{
    double total = 0;
    for (int i = 0; i < N; i++) 
    {
        total += ventas[i];
    }
    cout << "El total de ventas en el año fue de " << total << endl;
}
