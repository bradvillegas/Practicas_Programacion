// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 8
// Problema planteado: Generar edades y alturas de alumnos

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarEdadesYAlturas(int n)
{
    int totalEdad = 0, totalAltura = 0, mayoresDe18 = 0, mayoresDe175 = 0;
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        int edad = rand() % 35 + 1;
        int altura = rand() % 81 + 120;
        totalEdad += edad;
        totalAltura += altura;

        if (edad > 18)
        {
            mayoresDe18++;
        }
        if (altura > 175)
        {
            mayoresDe175++;
        }

        cout << "Alumno " << i + 1 << ": Edad = " << edad << ", Altura = " << altura << endl;
    }

    cout << "Edad media: " << totalEdad / n << endl;
    cout << "Altura media: " << totalAltura / n << endl;
    cout << "Cantidad de alumnos mayores de 18 años: " << mayoresDe18 << endl;
    cout << "Cantidad de alumnos con altura mayor a 1.75m: " << mayoresDe175 << endl;
}

int main()
{
    int n;
    cout << "Ingrese el número de alumnos: ";
    cin >> n;
    generarEdadesYAlturas(n);
    return 0;
}
