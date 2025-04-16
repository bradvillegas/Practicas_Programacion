// Materia: Programacion I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creacion: 08/04/2025 
// Numero de ejercicio: 3
// Problema planteado: Ordenar un vector por el metodo de seleccion

#include <iostream>
#include <vector>
using namespace std;

void LeerVector(vector<int> &v, int &n);
void Seleccion(vector<int> &v, int n);
void MostrarVector(const vector<int> &v);

int main()
{
    vector<int> v;
    int n;
    LeerVector(v, n);
    Seleccion(v, n);
    MostrarVector(v);
    return 0;
}

// Funcion de ordenamiento: Metodo de seleccion
void Seleccion(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIdx])
            {
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);
    }
}

void LeerVector(vector<int> &v, int &n)
{
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void MostrarVector(const vector<int> &v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
