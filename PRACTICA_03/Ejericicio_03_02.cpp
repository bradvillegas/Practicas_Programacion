// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 2
// Problema planteado: Convertir grados Celsius a Fahrenheit

#include <iostream>
using namespace std;

double celsiusAFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    double celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    double fahrenheit = celsiusAFahrenheit(celsius);
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;
    return 0;
}
