// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 6
// Problema planteado: Gestión de empleados con funciones

#include <iostream>
#include <string>
using namespace std;

struct Empleado
{
    string nombre;
    int id;
    float sueldo;
    int antiguedad;
};

void RegistrarEmpleados(Empleado empleados[], int n);
int ContarEmpleadosConSueldoMayorA(const Empleado empleados[], int n, float sueldo);
float CalcularPromedioAntiguedad(const Empleado empleados[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;
    cin.ignore();

    Empleado empleados[n];

    RegistrarEmpleados(empleados, n);

    float sueldo;
    cout << "\nIngrese el sueldo para filtrar: ";
    cin >> sueldo;
    int count = ContarEmpleadosConSueldoMayorA(empleados, n, sueldo);
    cout << "\nCantidad de empleados con sueldo mayor a " << sueldo << ": " << count << endl;

    float promedio = CalcularPromedioAntiguedad(empleados, n);
    cout << "Promedio de antiguedad de los empleados: " << promedio << " años." << endl;

    return 0;
}

void RegistrarEmpleados(Empleado empleados[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del empleado " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);
        cout << "ID: ";
        cin >> empleados[i].id;
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cout << "Antiguedad (en años): ";
        cin >> empleados[i].antiguedad;
        cin.ignore();
    }
}

int ContarEmpleadosConSueldoMayorA(const Empleado empleados[], int n, float sueldo)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (empleados[i].sueldo > sueldo)
        {
            count++;
        }
    }
    return count;
}

float CalcularPromedioAntiguedad(const Empleado empleados[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += empleados[i].antiguedad;
    }
    return static_cast<float>(total) / n;
}
