// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 9
// Problema planteado: Calificaciones Curso

#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>
using namespace std;

struct Estudiante
{
    string nombre;
    float t1, t2, t3, t4, ef;
    float nf;
};

void RegistrarNotas(Estudiante estudiantes[], int n);
void CalcularNotasFinales(Estudiante estudiantes[], int n);
void MostrarEstadisticas(const Estudiante estudiantes[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    cin.ignore();

    Estudiante estudiantes[n];

    RegistrarNotas(estudiantes, n);
    CalcularNotasFinales(estudiantes, n);
    MostrarEstadisticas(estudiantes, n);

    return 0;
}

void RegistrarNotas(Estudiante estudiantes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del estudiante " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Nota T1: ";
        cin >> estudiantes[i].t1;
        cout << "Nota T2: ";
        cin >> estudiantes[i].t2;
        cout << "Nota T3: ";
        cin >> estudiantes[i].t3;
        cout << "Nota T4: ";
        cin >> estudiantes[i].t4;
        cout << "Nota EF: ";
        cin >> estudiantes[i].ef;
        cin.ignore();
    }
}

void CalcularNotasFinales(Estudiante estudiantes[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float np = (estudiantes[i].t1 + estudiantes[i].t2 + estudiantes[i].t3 + estudiantes[i].t4) / 4;
        estudiantes[i].nf = 0.7 * np + 0.3 * estudiantes[i].ef;
    }
}

void MostrarEstadisticas(const Estudiante estudiantes[], int n)
{
    float suma = 0, max = numeric_limits<float>::min(), min = numeric_limits<float>::max();
    for (int i = 0; i < n; i++)
    {
        suma += estudiantes[i].nf;
        if (estudiantes[i].nf > max)
            max = estudiantes[i].nf;
        if (estudiantes[i].nf < min)
            min = estudiantes[i].nf;
    }

    float promedio = suma / n;

    cout << "\nEstadisticas del curso:\n";
    cout << "Promedio: " << fixed << setprecision(2) << promedio << endl;
    cout << "Nota maxima: " << max << endl;
    cout << "Nota minima: " << min << endl;
}
