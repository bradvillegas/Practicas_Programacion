// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/02/2025
// Número de ejercicio: 11
// Problema planteado: Calcular el consumo de pañales

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese la cantidad total de niños en la guardería: ";
    cin >> N;
    int n1 = rand() % (N + 1);
    int n2 = rand() % (N - n1 + 1);
    int n3 = N - n1 - n2;
    int pañales = (n1 * 6) + (n2 * 3) + (n3 * 2);
    cout << "Cantidad de pañales consumidos: " << pañales << endl;
    return 0;
}
