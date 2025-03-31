// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 4
// Problema planteado: Calcular el IMC

#include <iostream>
using namespace std;

double calcularIMC(double peso, double altura)
{
    return peso / (altura * altura);
}

int main()
{
    double peso, altura;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese la altura en metros: ";
    cin >> altura;
    double imc = calcularIMC(peso, altura);
    cout << "El IMC es: " << imc << endl;
    return 0;
}
