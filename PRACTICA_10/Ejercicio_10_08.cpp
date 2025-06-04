// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 8
// Problema planteado: Olimpiada Nacional

#include <iostream>
#include <string>
using namespace std;

struct Atleta
{
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

void RegistrarAtletas(Atleta atletas[], int n);
void MostrarMedallero(Atleta atletas[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cin.ignore();

    Atleta atletas[n];

    RegistrarAtletas(atletas, n);
    MostrarMedallero(atletas, n);

    return 0;
}

void RegistrarAtletas(Atleta atletas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del atleta " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);
        cout << "Departamento: ";
        getline(cin, atletas[i].departamento);
        cout << "Deporte: ";
        getline(cin, atletas[i].deporte);
        cout << "Medallas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }
}

void MostrarMedallero(Atleta atletas[], int n)
{
    string departamentos[100];
    int medallas[100] = {0};
    int numDepartamentos = 0;

    for (int i = 0; i < n; i++)
    {
        bool encontrado = false;
        for (int j = 0; j < numDepartamentos; j++)
        {
            if (departamentos[j] == atletas[i].departamento)
            {
                medallas[j] += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            departamentos[numDepartamentos] = atletas[i].departamento;
            medallas[numDepartamentos] = atletas[i].medallas;
            numDepartamentos++;
        }
    }

    cout << "\nMedallero Final:\n";
    for (int i = 0; i < numDepartamentos; i++)
    {
        cout << "Departamento: " << departamentos[i] << " - Medallas: " << medallas[i] << endl;
    }
}