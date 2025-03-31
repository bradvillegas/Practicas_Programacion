// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 5
// Problema planteado: Calcular el promedio ponderado

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double calcularPromedioPonderado()
{
    int calificaciones[4];
    int pesos[4] = {10, 20, 30, 40};
    int sumaCalificaciones = 0, sumaPesos = 0;

    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        calificaciones[i] = rand() % 100 + 1;
        sumaCalificaciones += calificaciones[i] * pesos[i];
        sumaPesos += pesos[i];
    }

    return static_cast<double>(sumaCalificaciones) / sumaPesos;
}

int main()
{
    double promedio = calcularPromedioPonderado();
    cout << "El promedio ponderado es: " << promedio << endl;
    return 0;
}