// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro 
// Fecha creación: 03/04/2025
// Número de ejercicio: 8
// Problema planteado: Validación de correo electrónico

#include <iostream>
#include <string>
using namespace std;

bool EsCorreoValido(string correo);
void ValidarCorreo(string correo);

int main() 
{
    string correo;
    cin >> correo;
    ValidarCorreo(correo);
    return 0;
}

bool EsCorreoValido(string correo) 
{
    size_t arrobaPos = correo.find('@');
    size_t puntoPos = correo.find('.', arrobaPos);
    return arrobaPos != string::npos && puntoPos != string::npos;
}

void ValidarCorreo(string correo) 
{
    if (EsCorreoValido(correo)) 
    {
        cout << "Correo electrónico válido" << endl;
    } 
    else 
    {
        cout << "Correo electrónico inválido" << endl;
    }
}
