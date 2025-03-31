// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 14
// Problema planteado: Simular un cajero automático

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad)
{
    if (cantidad > saldo)
    {
        cout << "Saldo insuficiente." << endl;
        return saldo;
    }

    if (cantidad % 10 != 0)
    {
        cout << "La cantidad debe ser múltiplo de 10." << endl;
        return saldo;
    }

    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs." << endl;
    return saldo;
}

int main()
{
    double saldo = 1000.0;
    double cantidad;
    cout << "Saldo disponible: " << saldo << " Bs." << endl;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    saldo = retirarDinero(saldo, cantidad);
    return 0;
}
