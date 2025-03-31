// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 2
// Problema planteado: Simular el lanzamiento de un dado

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, pares = 0, resultado;
    cout << "Ingrese el número de lanzamientos: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        resultado = rand() % 6 + 1;
        if (resultado % 2 == 0)
        {
            pares++;
        }
    }
    cout << "La frecuencia de caras pares es: " << pares << endl;
    return 0;
}
