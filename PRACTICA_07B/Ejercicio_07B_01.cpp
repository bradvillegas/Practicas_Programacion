// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 1
// Problema planteado: Intercambiar la primera y la última fila de una matriz n x n

#include <iostream>
using namespace std;

void LeerMatriz(int matriz[][100], int n);
void MostrarMatriz(int matriz[][100], int n);
void IntercambiarFilas(int matriz[][100], int n);

int main()
{
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    int matriz[100][100];

    LeerMatriz(matriz, n);
    IntercambiarFilas(matriz, n);

    cout << "Matriz resultante:\n";
    MostrarMatriz(matriz, n);

    return 0;
}

void LeerMatriz(int matriz[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
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

void IntercambiarFilas(int matriz[][100], int n)
{
    for (int j = 0; j < n; j++)
    {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = temp;
    }
}
