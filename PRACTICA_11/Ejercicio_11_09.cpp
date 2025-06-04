// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 9
// Problema planteado: Cifrado de un archivo de texto (Cifrado César)

#include <iostream>
#include <fstream>
using namespace std;

char cifrarCaracter(char c);
void cifrarArchivo();

int main()
{
    system("cls");

    cifrarArchivo();

    cout << "Archivo cifrado con éxito." << endl;

    return 0;
}

char cifrarCaracter(char c)
{
    if (isalpha(c))
    {
        char base = isupper(c) ? 'A' : 'a';
        return base + (c - base + 3) % 26;
    }

    return c;
}

void cifrarArchivo()
{
    fstream archivo("mensaje.txt", ios::in);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo de entrada." << endl;
        return;
    }

    string contenido;
    char c;

    while (archivo.get(c))
    {
        contenido += cifrarCaracter(c);
    }

    archivo.close();

    archivo.open("mensaje_cifrado.txt", ios::out);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo de salida." << endl;
        return;
    }

    archivo << contenido;

    archivo.close();
}
