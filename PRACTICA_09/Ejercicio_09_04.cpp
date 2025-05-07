// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 4
// Problema planteado: Buscar un número en un vector de forma recursiva

#include <iostream>
using namespace std;

bool Buscar(int v[], int tam, int valor, int pos);

int main()
{
    int n, valor;
    cin >> n;
    int v[100];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> valor;
    cout << (Buscar(v, n, valor, 0) ? "true" : "false") << endl;
    return 0;
}

bool Buscar(int v[], int tam, int valor, int pos)
{
    if (pos == tam)
    {
        return false;
    }
    if (v[pos] == valor)
    {
        return true;
    }
    return Buscar(v, tam, valor, pos + 1);
}
