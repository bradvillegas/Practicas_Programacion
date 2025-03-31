// Materia: Programación I, Paralelo 1
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 25/03/2025
// Número de ejercicio: 2
// Problema planteado: Introducir los valores en un arreglo de voltios y desplegar los valores.

#include <iostream>
using namespace std;

void IntroducirVoltios(float voltios[9]);
void DesplegarVoltios(const float voltios[9]);

int main() 
{
    float voltios[9];
    IntroducirVoltios(voltios);
    DesplegarVoltios(voltios);
    return 0;
}

void IntroducirVoltios(float voltios[9]) 
{
    voltios[0] = 11.95;
    voltios[1] = 16.32;
    voltios[2] = 12.15;
    voltios[3] = 8.22;
    voltios[4] = 15.98;
    voltios[5] = 26.22;
    voltios[6] = 13.54;
    voltios[7] = 6.45;
    voltios[8] = 17.59;
}

void DesplegarVoltios(const float voltios[9]) 
{
    cout << "Los valores de voltios son:\n";
    for (int i = 0; i < 9; i++) 
    {
        if (i == 3 || i == 6) 
        {
            cout << "\n";  // Se agrega salto de línea para dar formato.
        }
        cout << voltios[i] << " ";
    }
    cout << endl;
}
