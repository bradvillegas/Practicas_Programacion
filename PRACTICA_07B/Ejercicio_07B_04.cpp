// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 4
// Problema planteado: Generar una matriz de n x n con patrón de suma

#include <iostream>
using namespace std;

void GenerarMatriz(int matriz[][100], int n);
void MostrarMatriz(int matriz[][100], int n);

int main()
{
    int n;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    int matriz[100][100];

    GenerarMatriz(matriz, n);
    MostrarMatriz(matriz, n);

    return 0;
}

void GenerarMatriz(int matriz[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = 1 + i * 2 + j;
        }
    }
}

void MostrarMatriz(int matriz[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
