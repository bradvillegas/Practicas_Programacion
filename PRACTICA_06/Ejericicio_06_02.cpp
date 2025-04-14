// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 2
// Problema planteado: Un arreglo constante que contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos minerales

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string minerales[6] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    double produccion[6] = {998.0, 876.5, 786.67, 636.143, 135.567, 109.412};
    string buscar;
    cin >> buscar;
    for (int i = 0; i < 6; i++) 
    {
        if (minerales[i] == buscar) 
        {
            cout << produccion[i] << endl;
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        for (int j = i + 1; j < 6; j++) 
        {
            if (produccion[i] < produccion[j]) 
            {
                swap(produccion[i], produccion[j]);
                swap(minerales[i], minerales[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++) 
    {
        cout << minerales[i] << " " << produccion[i] << endl;
    }
    return 0;
}
