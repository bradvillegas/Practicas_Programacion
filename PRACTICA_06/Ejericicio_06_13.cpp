// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 13
// Problema planteado: Poner en mayúscula la primera letra de cada palabra

#include <iostream>
#include <string>
using namespace std;

void CapitalizarPalabras(string& texto);
void DesplegarTexto(string texto);

int main() 
{
    string texto;
    getline(cin, texto);
    CapitalizarPalabras(texto);
    DesplegarTexto(texto);
    return 0;
}

void CapitalizarPalabras(string& texto) 
{
    bool enPalabra = false;
    for (int i = 0; i < texto.length(); i++) 
    {
        if (isalpha(texto[i])) 
        {
            if (!enPalabra) 
            {
                texto[i] = toupper(texto[i]);
                enPalabra = true;
            }
        } 
        else 
        {
            enPalabra = false;
        }
    }
}

void DesplegarTexto(string texto) 
{
    cout << texto << endl;
}
