// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 7
// Problema planteado: Contar cuántos dígitos tiene un número entero

#include <iostream>
using namespace std;

int contarDigitos(int numero)
{
    int contador = 0;
    while (numero != 0)
    {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    int digitos = contarDigitos(numero);
    cout << "El número " << numero << " tiene " << digitos << " dígitos." << endl;
    return 0;
}
