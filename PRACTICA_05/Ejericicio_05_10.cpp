// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 10
// Problema planteado: Obtener el nombre del alumno con la mayor y menor calificación, 
// y la carrera con el desempeño mayor respecto al promedio.

#include <iostream>
#include <string>
using namespace std;

void LeerDatos(string nombres[], int calificaciones[], string carreras[], int N);
void MostrarMayorYMenor(int calificaciones[], string nombres[], int N);
void CalcularPromedio(int calificaciones[], int N);
void CarreraConMejorDesempeño(int calificaciones[], string carreras[], int N);

int main() 
{
    const int N = 5;
    string nombres[N] = {"Carlos", "Ana", "Luis", "María", "José"};
    int calificaciones[N] = {95, 80, 100, 85, 70};
    string carreras[N] = {"Ingeniería", "Medicina", "Derecho", "Arquitectura", "Sistemas"};

    LeerDatos(nombres, calificaciones, carreras, N);
    MostrarMayorYMenor(calificaciones, nombres, N);
    CalcularPromedio(calificaciones, N);
    CarreraConMejorDesempeño(calificaciones, carreras, N);

    return 0;
}

void LeerDatos(string nombres[], int calificaciones[], string carreras[], int N) 
{
    cout << "Estudiantes y sus calificaciones:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << nombres[i] << ": " << calificaciones[i] << " (" << carreras[i] << ")\n";
    }
}

void MostrarMayorYMenor(int calificaciones[], string nombres[], int N) 
{
    int max = calificaciones[0], min = calificaciones[0];
    string maxNombre = nombres[0], minNombre = nombres[0];

    for (int i = 1; i < N; i++) 
    {
        if (calificaciones[i] > max) 
        {
            max = calificaciones[i];
            maxNombre = nombres[i];
        }
        if (calificaciones[i] < min) 
        {
            min = calificaciones[i];
            minNombre = nombres[i];
        }
    }

    cout << "El estudiante con la mayor calificación es " << maxNombre << " con " << max << endl;
    cout << "El estudiante con la menor calificación es " << minNombre << " con " << min << endl;
}

void CalcularPromedio(int calificaciones[], int N) 
{
    int suma = 0;
    for (int i = 0; i < N; i++) 
    {
        suma += calificaciones[i];
    }
    double promedio = (double)suma / N;
    cout << "Promedio de calificaciones: " << promedio << endl;
}

void CarreraConMejorDesempeño(int calificaciones[], string carreras[], int N) 
{
    int mejorDesempeño = calificaciones[0];
    string carreraMejorDesempeño = carreras[0];

    for (int i = 1; i < N; i++) 
    {
        if (calificaciones[i] > mejorDesempeño) 
        {
            mejorDesempeño = calificaciones[i];
            carreraMejorDesempeño = carreras[i];
        }
    }

    cout << "La carrera con mejor desempeño es " << carreraMejorDesempeño << endl;
}
