// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 1
// Problema planteado: Obtener la suma de la serie

#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0, term = 4;
    cout << "Ingrese el número de términos: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma += term;
        if (i % 2 == 0)
        {
            term += 1 + (i / 2);
        }
        else
        {
            term += 2 + (i / 2);
        }
    }
    cout << "La suma de la serie es: " << suma << endl;
    return 0;
}
