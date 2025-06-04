// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 5
// Problema planteado: Actualizar datos en un archivo

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void actualizarPrecio();

int main()
{
    system("cls");

    actualizarPrecio();

    return 0;
}

void actualizarPrecio()
{
    ifstream archivoIn("productos.txt");
    ofstream archivoOut("temp.txt");
    string linea, producto, nombreBuscado;
    float precio, nuevoPrecio;
    bool encontrado = false;

    if (archivoIn.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    cout << "Ingrese el producto a actualizar: ";
    cin >> nombreBuscado;
    cout << "Nuevo precio: ";
    cin >> nuevoPrecio;

    while (getline(archivoIn, linea))
    {
        istringstream iss(linea);
        iss >> producto >> precio;

        if (producto == nombreBuscado)
        {
            archivoOut << producto << " " << nuevoPrecio << endl;
            encontrado = true;
        }
        else
        {
            archivoOut << linea << endl;
        }
    }

    archivoIn.close();
    archivoOut.close();

    remove("productos.txt");
    rename("temp.txt", "productos.txt");

    if (encontrado)
    {
        cout << "Precio actualizado con éxito." << endl;
    }
    else
    {
        cout << "Producto no encontrado." << endl;
    }
}
