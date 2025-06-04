// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 4
// Problema planteado: Personal de la UCB

#include <iostream>
#include <string>
using namespace std;

struct Empleado
{
    string nombre;
    string genero;
    float salario;
};

void RegistrarEmpleados(Empleado empleados[], int n);
void MostrarEmpleadoMayorYMenorSalario(const Empleado empleados[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;
    cin.ignore();

    Empleado empleados[n];

    RegistrarEmpleados(empleados, n);
    MostrarEmpleadoMayorYMenorSalario(empleados, n);

    return 0;
}

void RegistrarEmpleados(Empleado empleados[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del empleado " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);
        cout << "Genero: ";
        getline(cin, empleados[i].genero);
        cout << "Salario: ";
        cin >> empleados[i].salario;
        cin.ignore();
    }
}

void MostrarEmpleadoMayorYMenorSalario(const Empleado empleados[], int n)
{
    int indice_mayor = 0;
    int indice_menor = 0;

    for (int i = 1; i < n; i++)
    {
        if (empleados[i].salario > empleados[indice_mayor].salario)
        {
            indice_mayor = i;
        }
        if (empleados[i].salario < empleados[indice_menor].salario)
        {
            indice_menor = i;
        }
    }

    cout << "\nEmpleado con mayor salario: " << empleados[indice_mayor].nombre
         << " - " << empleados[indice_mayor].salario << endl;
    cout << "Empleado con menor salario: " << empleados[indice_menor].nombre
         << " - " << empleados[indice_menor].salario << endl;
}
