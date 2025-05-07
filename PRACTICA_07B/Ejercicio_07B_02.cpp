// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 2
// Problema planteado: Operaciones sobre matriz aleatoria: suma última columna, producto última fila, máximo valor y desviación estándar

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void GenerarMatriz(int matriz[][100], int n, int a, int b);
void MostrarMatriz(int matriz[][100], int n);
int SumaUltimaColumna(int matriz[][100], int n);
int ProductoUltimaFila(int matriz[][100], int n);
void MayorValor(int matriz[][100], int n, int &mayor, int &fila, int &col);
double DesviacionEstandar(int matriz[][100], int n);

int main()
{
    int n, a, b;
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;
    cout << "Ingrese el valor mínimo (A): ";
    cin >> a;
    cout << "Ingrese el valor máximo (B): ";
    cin >> b;

    int matriz[100][100];

    srand(time(0));
    GenerarMatriz(matriz, n, a, b);
    MostrarMatriz(matriz, n);

    cout << "Suma última columna: " << SumaUltimaColumna(matriz, n) << endl;
    cout << "Producto última fila: " << ProductoUltimaFila(matriz, n) << endl;

    int mayor, fila, col;
    MayorValor(matriz, n, mayor, fila, col);
    cout << "Mayor valor: " << mayor << " en (" << fila << "," << col << ")" << endl;

    cout << "Desviación estándar: " << DesviacionEstandar(matriz, n) << endl;

    return 0;
}

void GenerarMatriz(int matriz[][100], int n, int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = a + rand() % (b - a + 1);
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

int SumaUltimaColumna(int matriz[][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += matriz[i][n - 1];
    }
    return suma;
}

int ProductoUltimaFila(int matriz[][100], int n)
{
    int prod = 1;
    for (int j = 0; j < n; j++)
    {
        prod *= matriz[n - 1][j];
    }
    return prod;
}

void MayorValor(int matriz[][100], int n, int &mayor, int &fila, int &col)
{
    mayor = matriz[0][0];
    fila = 0;
    col = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                col = j;
            }
        }
    }
}

double DesviacionEstandar(int matriz[][100], int n)
{
    double suma = 0, sumaCuadrados = 0;
    int total = n * n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma += matriz[i][j];
            sumaCuadrados += matriz[i][j] * matriz[i][j];
        }
    }

    double media = suma / total;
    return sqrt((sumaCuadrados / total) - (media * media));
}
