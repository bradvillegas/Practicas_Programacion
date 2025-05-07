// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 8
// Problema planteado: Comparar si dos vectores son iguales de forma recursiva

#include <iostream>
using namespace std;

bool CompararVectores(int a[], int b[], int tam, int pos);

int main()
{
    int n;
    cin >> n;
    int a[100], b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << (CompararVectores(a, b, n, 0) ? "true" : "false") << endl;
    return 0;
}

bool CompararVectores(int a[], int b[], int tam, int pos)
{
    if (pos == tam)
    {
        return true;
    }
    if (a[pos] != b[pos])
    {
        return false;
    }
    return CompararVectores(a, b, tam, pos + 1);
}
