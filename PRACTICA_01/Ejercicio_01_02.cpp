// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 2
// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio, volumen;
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen = (4.0 / 3.0)*pow(radio, 3);
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
