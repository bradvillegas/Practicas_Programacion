// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 6
// Problema planteado: Adivinar un número generado aleatoriamente

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numeroPensado, intento, min = 0, max = 50;
    srand(time(0));
    numeroPensado = rand() % 51;
    cout << "Estoy pensando en un número entre " << min << " y " << max << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> intento;
        if (intento < numeroPensado)
        {
            cout << "El número está entre " << intento << " y " << max << endl;
            min = intento;
        }
        else if (intento > numeroPensado)
        {
            cout << "El número está entre " << min << " y " << intento << endl;
            max = intento;
        }
        else
        {
            cout << "Felicitaciones… Adivinaste el número" << endl;
            break;
        }
    }
    return 0;
}
