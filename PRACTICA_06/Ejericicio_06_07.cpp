// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 7
// Problema planteado: Compresión de datos en una imagen en escala de grises

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GenerarImagen(int imagen[], int N);
void ContarRangos(int imagen[], int N);

int main() 
{
    int N;
    cin >> N;
    int imagen[N];
    GenerarImagen(imagen, N);
    ContarRangos(imagen, N);
    return 0;
}

void GenerarImagen(int imagen[], int N) 
{
    srand(time(0));
    for (int i = 0; i < N; i++) 
    {
        imagen[i] = rand() % 256;
    }
}

void ContarRangos(int imagen[], int N) 
{
    int rango[26] = {0}; 
    for (int i = 0; i < N; i++) 
    {
        rango[imagen[i] / 10]++;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (rango[i] > 0) 
        {
            cout << "Rango " << i * 10 << "-" << (i + 1) * 10 - 1 << ": " << rango[i] << endl;
        }
    }
}
