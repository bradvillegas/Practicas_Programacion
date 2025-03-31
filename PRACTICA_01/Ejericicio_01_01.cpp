// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 1
// Problema planteado: Area de un triangulo
#include <iostream>
using namespace std;
int main() {
    float base, altura, area;
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El área del triángulo es: " << area << endl;
    return 0;
}