// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 6
// Problema planteado: Trasponer una matriz de N x M

#include <iostream>
using namespace std;

void LeerMatriz(int matriz[][100], int filas, int columnas);
void MostrarMatriz(int matriz[][100], int filas, int columnas);
void TransponerMatriz(int matriz[][100], int transpuesta[][100], int filas, int columnas);

int main()
{
    int N, M;
    cout << "Ingrese N (filas): ";
    cin >> N;
    cout << "Ingrese M (columnas): ";
    cin >> M;

    int matriz[100][100], transpuesta[100][100];

    LeerMatriz(matriz, N, M);
    TransponerMatriz(matriz, transpuesta, N, M);

    cout << "Matriz transpuesta (" << M << "x" << N << "):" << endl;
    MostrarMatriz(transpuesta, M, N);

    return 0;
}

void LeerMatriz(int matriz[][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void MostrarMatriz(int matriz[][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void TransponerMatriz(int matriz[][100], int transpuesta[][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}
