// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 6
// Problema planteado: Rango de calificaciones en un curso

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LlenarCalificaciones(int calificaciones[], int N);
void CalcularRangos(int calificaciones[], int N);

int main() 
{
    int N;
    cin >> N;
    int calificaciones[N];
    LlenarCalificaciones(calificaciones, N);
    CalcularRangos(calificaciones, N);
    return 0;
}

void LlenarCalificaciones(int calificaciones[], int N) 
{
    srand(time(0));
    for (int i = 0; i < N; i++) 
    {
        calificaciones[i] = rand() % 101;
    }
}

void CalcularRangos(int calificaciones[], int N) 
{
    int reprobados = 0, regulares = 0, buenos = 0, excelentes = 0;
    for (int i = 0; i < N; i++) 
    {
        if (calificaciones[i] <= 59) 
        {
            reprobados++;
        }
        else if (calificaciones[i] <= 79) 
        {
            regulares++;
        }
        else if (calificaciones[i] <= 89) 
        {
            buenos++;
        }
        else 
        {
            excelentes++;
        }
    }
    cout << "Reprobados: " << reprobados << endl;
    cout << "Regulares: " << regulares << endl;
    cout << "Buenos: " << buenos << endl;
    cout << "Excelentes: " << excelentes << endl;
}
