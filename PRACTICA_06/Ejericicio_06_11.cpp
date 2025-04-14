// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 11
// Problema planteado: Dividir una cadena en tokens (subcadenas) separadas por un delimitador

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void DividirCadena(string cadena, char delimitador, vector<string>& tokens);
void DesplegarTokens(vector<string> tokens);

int main() 
{
    string cadena;
    char delimitador;
    cin >> cadena >> delimitador;
    vector<string> tokens;
    DividirCadena(cadena, delimitador, tokens);
    DesplegarTokens(tokens);
    return 0;
}

void DividirCadena(string cadena, char delimitador, vector<string>& tokens) 
{
    stringstream ss(cadena);
    string token;
    while (getline(ss, token, delimitador)) 
    {
        tokens.push_back(token);
    }
}

void DesplegarTokens(vector<string> tokens) 
{
    for (const string& token : tokens) 
    {
        cout << token << endl;
    }
}
