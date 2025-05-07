// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 5
// Problema planteado: Multiplicar dos matrices (N x M) * (M x N)

#include <iostream>
using namespace std;

void LeerMatriz(int matriz[][100], int filas, int columnas);
void MultiplicarMatrices(int A[][100], int B[][100], int C[][100], int N, int M);
void MostrarMatriz(int matriz[][100], int filas, int columnas);

int main()
{
    int N, M;
    cout << "Ingrese N (filas de A): ";
    cin >> N;
    cout << "Ingrese M (columnas de A / filas de B): ";
    cin >> M;

    int A[100][100], B[100][100], C[100][100];

    cout << "Ingrese matriz A (" << N << "x" << M << "):" << endl;
    LeerMatriz(A, N, M);

    cout << "Ingrese matriz B (" << M << "x" << N << "):" << endl;
    LeerMatriz(B, M, N);

    MultiplicarMatrices(A, B, C, N, M);

    cout << "Matriz resultante C (" << N << "x" << N << "):" << endl;
    MostrarMatriz(C, N, N);

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

void MultiplicarMatrices(int A[][100], int B[][100], int C[][100], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
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
