// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 3
// Problema planteado: Estudiantes de Programación I

#include <iostream>
#include <string>
using namespace std;

struct Estudiante
{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    long long telefono;
};

void RegistrarEstudiantes(Estudiante estudiantes[], int n);
void MostrarEstudiantes(const Estudiante estudiantes[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    cin.ignore();

    Estudiante estudiantes[n];

    RegistrarEstudiantes(estudiantes, n);
    MostrarEstudiantes(estudiantes, n);

    return 0;
}

void RegistrarEstudiantes(Estudiante estudiantes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del estudiante " << i + 1 << endl;
        cout << "Cedula: ";
        cin >> estudiantes[i].cedula;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Apellido: ";
        getline(cin, estudiantes[i].apellido);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cin.ignore();
        cout << "Profesion: ";
        getline(cin, estudiantes[i].profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, estudiantes[i].lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, estudiantes[i].direccion);
        cout << "Telefono: ";
        cin >> estudiantes[i].telefono;
        cin.ignore();
    }
}

void MostrarEstudiantes(const Estudiante estudiantes[], int n)
{
    cout << "\nLista de estudiantes:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Cedula: " << estudiantes[i].cedula << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellido: " << estudiantes[i].apellido << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Profesion: " << estudiantes[i].profesion << endl;
        cout << "Lugar de nacimiento: " << estudiantes[i].lugar_nacimiento << endl;
        cout << "Direccion: " << estudiantes[i].direccion << endl;
        cout << "Telefono: " << estudiantes[i].telefono << endl;
    }
}