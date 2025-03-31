// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 12
// Problema planteado: Calcular el tiempo trabajado extra o lo que se debe

#include <iostream>
using namespace std;

int calcularTiempoExtra(int minutosTrabajados)
{
    const int jornadaLaboralMinutos = 8 * 60;
    int tiempoExtra = minutosTrabajados - jornadaLaboralMinutos;
    return tiempoExtra;
}

int main()
{
    int minutosTrabajados;
    cout << "Ingrese el tiempo trabajado en minutos: ";
    cin >> minutosTrabajados;
    int tiempoExtra = calcularTiempoExtra(minutosTrabajados);
    
    if (tiempoExtra > 0)
    {
        cout << "Tiempo trabajado extra: " << tiempoExtra << " minutos." << endl;
    }
    else
    {
        cout << "Tiempo que debe a la empresa: " << -tiempoExtra << " minutos." << endl;
    }

    return 0;
}
