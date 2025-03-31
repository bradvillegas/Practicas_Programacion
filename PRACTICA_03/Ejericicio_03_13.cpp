// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 13
// Problema planteado: Calcular el precio de un viaje en taxi

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos)
{
    double tarifaBase = 5.0;
    double precioPorKm = 1.50;
    double tarifaTotal = tarifaBase + kmRecorridos * precioPorKm;

    if (kmRecorridos > 10)
    {
        tarifaTotal *= 0.90; // Aplica un descuento del 10% si la distancia es mayor a 10 km
    }

    return tarifaTotal;
}

int main()
{
    double kmRecorridos;
    cout << "Ingrese la distancia recorrida en kilómetros: ";
    cin >> kmRecorridos;
    double tarifa = calcularTarifa(kmRecorridos);
    cout << "El precio del viaje es: $" << tarifa << endl;
    return 0;
}
