// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 4
// Problema planteado: Leer 2 vectores de dimensión N y calcular su multiplicación en otro vector.

#include <iostream>
using namespace std;

void LeerVectores(int vec1[], int vec2[], int N);
void MultiplicarVectores(int vec1[], int vec2[], int resultado[], int N);
void DesplegarVector(int vector[], int N);

int main() {
    int N;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> N;

    int vec1[N], vec2[N], resultado[N];
    LeerVectores(vec1, vec2, N);
    MultiplicarVectores(vec1, vec2, resultado, N);
    DesplegarVector(resultado, N);

    return 0;
}

void LeerVectores(int vec1[], int vec2[], int N) 
{
    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < N; i++) 
    {
        cin >> vec1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; i++) 
    {
        cin >> vec2[i];
    }
}

void MultiplicarVectores(int vec1[], int vec2[], int resultado[], int N) 
{
    for (int i = 0; i < N; i++) {
        resultado[i] = vec1[i] * vec2[i];
    }
}

void DesplegarVector(int vector[], int N) 
{
    cout << "Resultado de la multiplicación de los vectores:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
