// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 4
// Problema planteado: Simular el lanzamiento de una moneda

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, caras = 0, cruces = 0, resultado;
    cout << "Ingrese el número de lanzamientos: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        resultado = rand() % 2;
        if (resultado == 0)
        {
            caras++;
        }
        else
        {
            cruces++;
        }
    }
    cout << "Porcentaje de caras: " << (caras * 100.0) / n << "%" << endl;
    cout << "Porcentaje de cruces: " << (cruces * 100.0) / n << "%" << endl;
    return 0;
}
