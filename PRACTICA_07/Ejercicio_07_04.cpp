// Materia: Programacion I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creacion: 08/04/2025 
// Numero de ejercicio: 4
// Problema planteado: Buscar un elemento de un vector por el metodo de busqueda secuencial

#include <iostream>
#include <vector>
using namespace std;

void LeerVector(vector<int> &v, int &n);
int BusquedaSecuencial(const vector<int> &v, int n, int x);

int main()
{
    vector<int> v;
    int n, x;
    LeerVector(v, n);
    cin >> x;
    int pos = BusquedaSecuencial(v, n, x);
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

// Funcion de busqueda: Metodo de busqueda secuencial
int BusquedaSecuencial(const vector<int> &v, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return i;
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
