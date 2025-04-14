// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 4
// Problema planteado: Rotación de un vector k posiciones a la derecha

#include <iostream>
using namespace std;

void LeerVector(int v[], int N);
void RotarVector(int v[], int N, int k, int resultado[]);
void DesplegarVector(int v[], int N);

int main() 
{
    int N, k;
    cin >> N >> k;
    int v[N], resultado[N];
    LeerVector(v, N);
    RotarVector(v, N, k, resultado);
    DesplegarVector(resultado, N);
    return 0;
}

void LeerVector(int v[], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        cin >> v[i];
    }
}

void RotarVector(int v[], int N, int k, int resultado[]) 
{
    k = k % N; 
    for (int i = 0; i < N; i++) 
    {
        resultado[(i + k) % N] = v[i];
    }
}

void DesplegarVector(int v[], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
