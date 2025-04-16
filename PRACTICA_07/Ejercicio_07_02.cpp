// Materia: Programacion I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creacion: 08/04/2025 
// Numero de ejercicio: 2
// Problema planteado: Ordenar un vector por el metodo de insercion

#include <iostream>
#include <vector>
using namespace std;

void LeerVector(vector<int> &v, int &n);
void Insercion(vector<int> &v, int n);
void MostrarVector(const vector<int> &v);

int main()
{
    vector<int> v;
    int n;
    LeerVector(v, n);
    Insercion(v, n);
    MostrarVector(v);
    return 0;
}

// Funcion de ordenamiento: Metodo de insercion
void Insercion(vector<int> &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        int clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = clave;
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
