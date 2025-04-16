// Materia: Programacion I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creacion: 08/04/2025 
// Numero de ejercicio: 1
// Problema planteado: Ordenar un vector por el metodo de burbuja

#include <iostream>
#include <vector>
using namespace std;

void LeerVector(vector<int> &v, int &n);
void Burbuja(vector<int> &v, int n);
void MostrarVector(const vector<int> &v);

int main()
{
    vector<int> v;
    int n;
    LeerVector(v, n);
    Burbuja(v, n);
    MostrarVector(v);
    return 0;
}

// Funcion de ordenamiento: Metodo burbuja
void Burbuja(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
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
