// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 2
// Problema planteado: Datos de un atleta

#include <iostream>
#include <cstring>
using namespace std;

struct Atleta
{
    char nombre[100];
    char pais[100];
    int edad;
    int mejor_tiempo;
};

void RegistrarAtletas(Atleta atletas[], int n);
void MostrarMejorTiempo(const Atleta atletas[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cin.ignore();

    Atleta atletas[n];

    RegistrarAtletas(atletas, n);
    MostrarMejorTiempo(atletas, n);

    return 0;
}

void RegistrarAtletas(Atleta atletas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del atleta " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 100);
        cout << "Pais: ";
        cin.getline(atletas[i].pais, 100);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo (en segundos): ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();
    }
}

void MostrarMejorTiempo(const Atleta atletas[], int n)
{
    int indice_mejor = 0;
    for (int i = 1; i < n; i++)
    {
        if (atletas[i].mejor_tiempo < atletas[indice_mejor].mejor_tiempo)
        {
            indice_mejor = i;
        }
    }

    cout << "\nEl atleta con el mejor tiempo es: " << atletas[indice_mejor].nombre
         << " de " << atletas[indice_mejor].pais
         << " con un tiempo de " << atletas[indice_mejor].mejor_tiempo << " segundos." << endl;
}
