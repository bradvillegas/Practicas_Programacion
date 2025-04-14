// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 5
// Problema planteado: Intersección de dos listas de clientes

#include <iostream>
#include <string>
using namespace std;

void LeerClientes(string lista[], int n);
void CompararClientes(string lista1[], string lista2[], int n1, int n2);

int main() 
{
    int n1, n2;
    cin >> n1 >> n2;
    string lista1[n1], lista2[n2];

    LeerClientes(lista1, n1);
    LeerClientes(lista2, n2);
    CompararClientes(lista1, lista2, n1, n2);
    return 0;
}

void LeerClientes(string lista[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cin >> lista[i];
    }
}

void CompararClientes(string lista1[], string lista2[], int n1, int n2) 
{
    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            if (lista1[i] == lista2[j]) 
            {
                cout << lista1[i] << endl;
            }
        }
    }
}
