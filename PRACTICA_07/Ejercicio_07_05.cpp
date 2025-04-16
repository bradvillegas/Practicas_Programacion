// Materia: Programacion I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creacion: 08/04/2025 
// Numero de ejercicio: 5
// Problema planteado: Buscar un elemento de un vector por el metodo de busqueda binaria

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void LeerVector(vector<int> &v, int &n);
int BusquedaBinaria(const vector<int> &v, int x);

int main()
{
    vector<int> v;
    int n, x;
    LeerVector(v, n);
    sort(v.begin(), v.end());
    cin >> x;
    int pos = BusquedaBinaria(v, x);
    if (pos != -1)
    {
        cout << "Elemento encontrado en la posicion: " << pos << endl;
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }
    return 0;
}

// Funcion de busqueda: Metodo de busqueda binaria
int BusquedaBinaria(const vector<int> &v, int x)
{
    int ini = 0;
    int fin = v.size() - 1;
    while (ini <= fin)
    {
        int mid = (ini + fin) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] < x)
        {
            ini = mid + 1;
        }
        else
        {
            fin = mid - 1;
        }
    }
    return -1;
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
