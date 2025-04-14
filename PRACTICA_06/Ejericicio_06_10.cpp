// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 10
// Problema planteado: Eliminar todos los dígitos de una cadena

#include <iostream>
#include <string>
using namespace std;

void EliminarDigitos(string& cadena);
void DesplegarCadena(string cadena);

int main() 
{
    string cadena;
    cin >> cadena;
    EliminarDigitos(cadena);
    DesplegarCadena(cadena);
    return 0;
}

void EliminarDigitos(string& cadena) 
{
    string resultado = "";
    for (char c : cadena) 
    {
        if (!isdigit(c)) 
        {
            resultado += c;
        }
    }
    cadena = resultado;
}

void DesplegarCadena(string cadena) 
{
    cout << cadena << endl;
}
