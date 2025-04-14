// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 9
// Problema planteado: Inversión del orden de las palabras en una oración

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void InvertirOracion(string oracion);
void DesplegarOracionInvertida(vector<string> palabras);

int main() 
{
    string oracion;
    getline(cin, oracion);
    InvertirOracion(oracion);
    return 0;
}

void InvertirOracion(string oracion) 
{
    stringstream ss(oracion);
    string palabra;
    vector<string> palabras;
    while (ss >> palabra) 
    {
        palabras.push_back(palabra);
    }
    for (int i = palabras.size() - 1; i >= 0; i--) 
    {
        cout << palabras[i] << " ";
    }
    cout << endl;
}

void DesplegarOracionInvertida(vector<string> palabras) 
{
    for (int i = palabras.size() - 1; i >= 0; i--) 
    {
        cout << palabras[i] << " ";
    }
    cout << endl;
}
