// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 8
// Problema planteado: Contador de líneas, palabras y caracteres

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void contarElementos();

int main()
{
    system("cls");

    contarElementos();

    return 0;
}

void contarElementos()
{
    ifstream archivo("documento.txt");
    string linea, palabra;
    int lineas = 0, palabras = 0, caracteres = 0;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        lineas++;
        caracteres += linea.length();

        istringstream iss(linea);
        while (iss >> palabra)
        {
            palabras++;
        }
    }

    archivo.close();

    cout << "Líneas: " << lineas << endl;
    cout << "Palabras: " << palabras << endl;
    cout << "Caracteres: " << caracteres << endl;
}
