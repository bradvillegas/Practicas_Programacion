// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 12
// Problema planteado: Verificar si una cadena es un palíndromo

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool EsPalindromo(string texto);
void DesplegarResultado(bool resultado);

int main() 
{
    string texto;
    getline(cin, texto);
    bool resultado = EsPalindromo(texto);
    DesplegarResultado(resultado);
    return 0;
}

bool EsPalindromo(string texto) 
{
    string limpio = "";
    for (char c : texto) 
    {
        if (isalnum(c)) 
        {
            limpio += tolower(c);
        }
    }
    int inicio = 0, fin = limpio.length() - 1;
    while (inicio < fin) 
    {
        if (limpio[inicio] != limpio[fin]) 
        {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

void DesplegarResultado(bool resultado) 
{
    if (resultado) 
    {
        cout << "Es un palíndromo" << endl;
    } 
    else 
    {
        cout << "No es un palíndromo" << endl;
    }
}
