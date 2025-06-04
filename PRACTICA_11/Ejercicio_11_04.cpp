// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 4
// Problema planteado: Búsqueda de texto en un archivo

#include <iostream>
#include <fstream>
using namespace std;

int buscarTexto(string textoBuscado);

int main()
{
    system("cls");

    string texto;
    cout << "Ingrese la palabra o frase a buscar: ";
    getline(cin, texto);

    int apariciones = buscarTexto(texto);
    cout << "Total de apariciones: " << apariciones << endl;

    return 0;
}

int buscarTexto(string textoBuscado)
{
    ifstream archivo("datos.txt");
    string linea;
    int contador = 0;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return 0;
    }

    while (getline(archivo, linea))
    {
        size_t pos = linea.find(textoBuscado);
        while (pos != string::npos)
        {
            contador++;
            pos = linea.find(textoBuscado, pos + 1);
        }
    }

    archivo.close();
    return contador;
}
