// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 3
// Problema planteado: Promedio de notas
#include <iostream>
using namespace std;
int main() 
{
    int n;
    float suma = 0, promedio, nota;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    promedio = suma / n;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}
