// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 13/02/2025
// Número de ejercicio: 8
// Problema planteado: Verificar si una letra es vocal, consonante o carácter especial
#include <iostream>
using namespace std;
int main() 
{
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) 
    {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') 
            {
            cout << "La letra es una vocal." << endl;
        } else {
            cout << "La letra es una consonante." << endl;
        }
    } else {
        cout << "El carácter no es una letra, es un carácter especial." << endl;
    }
    return 0;
}
