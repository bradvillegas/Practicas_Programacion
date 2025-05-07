// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/04/2024
// Número de ejercicio: 7
// Problema planteado: Calcular la suma de los elementos de un vector de forma recursiva

#include <iostream>
using namespace std;

int SumaVector(int v[], int tam);

int main()
{
    int n;
    cin >> n;
    int v[100];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << SumaVector(v, n) << endl;
    return 0;
}

int SumaVector(int v[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }
    return v[tam - 1] + SumaVector(v, tam - 1);
}
