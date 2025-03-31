// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 8
// Problema planteado: Buscar por nombre de mineral y desplegar la producción.
// Ordenar del mayor al menor (producción) y mostrar el resultado.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Mineral {
    string nombre;
    double produccion;
};

void BuscarMineral(Mineral minerales[], int N, string nombre);
void OrdenarMinerales(Mineral minerales[], int N);
void DesplegarMinerales(Mineral minerales[], int N);

int main() 
{
    Mineral minerales[6] = 
    {
        {"SN", 998.000},
        {"SB", 876.500},
        {"AU", 786.670},
        {"PT", 636.143},
        {"AG", 135.567},
        {"CU", 109.412}
    };

    string nombre;
    cout << "Ingrese el nombre del mineral que desea buscar (por ejemplo: SN): ";
    cin >> nombre;
    BuscarMineral(minerales, 6, nombre);
    
    OrdenarMinerales(minerales, 6);
    DesplegarMinerales(minerales, 6);

    return 0;
}

void BuscarMineral(Mineral minerales[], int N, string nombre) 
{
    for (int i = 0; i < N; i++) 
    {
        if (minerales[i].nombre == nombre) {
            cout << "Mineral: " << minerales[i].nombre << ", Producción: " << minerales[i].produccion << " toneladas\n";
            return;
        }
    }
    cout << "Mineral no encontrado.\n";
}

void OrdenarMinerales(Mineral minerales[], int N) 
{
    sort(minerales, minerales + N, [](Mineral a, Mineral b) 
    {
        return a.produccion > b.produccion;
    });
}

void DesplegarMinerales(Mineral minerales[], int N) 
{
    cout << "Minerales ordenados por producción (de mayor a menor):\n";
    for (int i = 0; i < N; i++) 
    {
        cout << minerales[i].nombre << " " << minerales[i].produccion << " toneladas\n";
    }
}
