// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 6
// Problema planteado: Declarar tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, 
// pedir valores para ‘vector1’ y ‘vector2’ y calcular vector3=vector1+vector2.

#include <iostream>
using namespace std;

void LeerVectores(int vector1[], int vector2[], int N);
void SumarVectores(int vector1[], int vector2[], int vector3[], int N);
void DesplegarVector(int vector[], int N);

int main() {
    const int N = 5;
    int vector1[N], vector2[N], vector3[N];

    LeerVectores(vector1, vector2, N);
    SumarVectores(vector1, vector2, vector3, N);
    DesplegarVector(vector3, N);

    return 0;
}

void LeerVectores(int vector1[], int vector2[], int N) 
{
    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < N; i++) 
    {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; i++) 
    {
        cin >> vector2[i];
    }
}

void SumarVectores(int vector1[], int vector2[], int vector3[], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}

void DesplegarVector(int vector[], int N) 
{
    cout << "Resultado de la suma de los vectores:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
