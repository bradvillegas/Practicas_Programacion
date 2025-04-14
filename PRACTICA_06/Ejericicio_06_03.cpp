// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 3
// Problema planteado: Selección aleatoria de nombre, apellido y edad

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void LlenarVectores(string nombres[], string apellidos[], int edades[], int n);
void MostrarAleatorio(string nombres[], string apellidos[], int edades[], int n, int repeticiones);

int main() 
{
    int n, repeticiones;
    cin >> n >> repeticiones;
    string nombres[n], apellidos[n];
    int edades[n];

    LlenarVectores(nombres, apellidos, edades, n);
    MostrarAleatorio(nombres, apellidos, edades, n, repeticiones);
    return 0;
}

void LlenarVectores(string nombres[], string apellidos[], int edades[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cin >> nombres[i];
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> apellidos[i];
    }
    for (int i = 0; i < n; i++) 
    {
        cin >> edades[i];
    }
}

void MostrarAleatorio(string nombres[], string apellidos[], int edades[], int n, int repeticiones) 
{
    srand(time(0));
    for (int i = 0; i < repeticiones; i++) 
    {
        int indice = rand() % n;
        cout << nombres[indice] << " " << apellidos[indice] << " " << edades[indice] << endl;
    }
}
