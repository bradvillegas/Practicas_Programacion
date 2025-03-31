// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 3
// Problema planteado: Introducir calificaciones y calcular el promedio, la desviación y la varianza.

#include <iostream>
#include <cmath>
using namespace std;

void IntroducirCalificaciones(int calificaciones[], int& numCalificaciones);
double CalcularPromedio(int calificaciones[], int numCalificaciones);
double CalcularDesviacionTipica(int calificaciones[], int numCalificaciones, double promedio);
double CalcularVarianza(int calificaciones[], int numCalificaciones, double promedio);

int main() 
{
    const int MAX_CALIFICACIONES = 100;
    int calificaciones[MAX_CALIFICACIONES];
    int numCalificaciones = 0;

    IntroducirCalificaciones(calificaciones, numCalificaciones);

    if (numCalificaciones == 0) 
    {
        cout << "No se ingresaron calificaciones.\n";
        return 0;
    }

    double promedio = CalcularPromedio(calificaciones, numCalificaciones);
    double desviacionTipica = CalcularDesviacionTipica(calificaciones, numCalificaciones, promedio);
    double varianza = CalcularVarianza(calificaciones, numCalificaciones, promedio);

    cout << "Promedio de calificaciones: " << promedio << endl;
    cout << "Desviación típica de calificaciones: " << desviacionTipica << endl;
    cout << "Varianza de las calificaciones: " << varianza << endl;

    return 0;
}

void IntroducirCalificaciones(int calificaciones[], int& numCalificaciones) 
{
    int num;
    cout << "Ingrese las calificaciones (0 para terminar):\n";
    while (true) {
        cin >> num;
        if (num == 0) break;
        calificaciones[numCalificaciones++] = num;
    }
}

double CalcularPromedio(int calificaciones[], int numCalificaciones) 
{
    double suma = 0;
    for (int i = 0; i < numCalificaciones; i++) 
    {
        suma += calificaciones[i];
    }
    return suma / numCalificaciones;
}

double CalcularDesviacionTipica(int calificaciones[], int numCalificaciones, double promedio) 
{
    double suma = 0;
    for (int i = 0; i < numCalificaciones; i++) 
    {
        suma += pow(calificaciones[i] - promedio, 2);
    }
    return sqrt(suma / numCalificaciones);
}

double CalcularVarianza(int calificaciones[], int numCalificaciones, double promedio) 
{
    double suma = 0;
    for (int i = 0; i < numCalificaciones; i++) 
    {
        suma += pow(calificaciones[i] - promedio, 2);
    }
    return suma / numCalificaciones;
}
