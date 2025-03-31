// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 4
// Problema planteado: Conversión de temperatura de grados centígrados a Kelvin
#include <iostream>
using namespace std;
int main() 
{
    float centigrados, kelvin;
    cout << "Ingrese la temperatura en grados centígrados: ";
    cin >> centigrados;
    kelvin = centigrados + 273.15;
    cout << "La temperatura en Kelvin es: " << kelvin << endl;
    return 0;
}
