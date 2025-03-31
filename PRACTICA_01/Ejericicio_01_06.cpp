// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 6
// Problema planteado: Verificar si dos números son amigos
#include <iostream>
using namespace std;
int sumaDivisores(int num) 
{
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}
int main() 
{
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    if (sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1) {
        cout << num1 << " y " << num2 << " son números amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son números amigos." << endl;
    }
    return 0;
}
