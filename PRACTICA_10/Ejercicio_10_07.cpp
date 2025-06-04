// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 7
// Problema planteado: Inventario de productos en una tienda

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Producto
{
    string nombre;
    string codigo;
    float precio;
    int cantidad_en_inventario;
    string observaciones;
};

void RegistrarProductos(Producto productos[], int n);
void MostrarProductos(const Producto productos[], int n);
void ProductoMasCaro(const Producto productos[], int n);
void TotalProductos(const Producto productos[], int n);
void ProductoPocoInventario(Producto productos[], int n);

int main()
{
    int n;
    cout << "Ingrese el numero de productos: ";
    cin >> n;
    cin.ignore();

    Producto productos[n];

    RegistrarProductos(productos, n);
    MostrarProductos(productos, n);
    ProductoMasCaro(productos, n);
    TotalProductos(productos, n);

    return 0;
}

void RegistrarProductos(Producto productos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos del producto " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, productos[i].nombre);
        cout << "Codigo: ";
        getline(cin, productos[i].codigo);
        cout << "Precio: ";
        cin >> productos[i].precio;
        cout << "Cantidad en Inventario: ";
        cin >> productos[i].cantidad_en_inventario;
        cin.ignore();
    }
}

void MostrarProductos(const Producto productos[], int n)
{
    cout << "\nDatos ingresados.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nProducto " << i + 1;
        cout << "\nNombre: " << productos[i].nombre;
        cout << "\nCodigo: " << productos[i].codigo;
        cout << "\nPrecio: " << productos[i].precio;
        cout << "\nCantidad en inventario: " << productos[i].cantidad_en_inventario;

        if (productos[i].cantidad_en_inventario < 5)
        {
            cout << "\nProducto con baja cantidad de inventario!!!";
        }
        else
        {
            cout << "\nAun hay inventario :D";
        }
        cout << endl;
    }
}

void ProductoMasCaro(const Producto productos[], int n)
{
    float mayor_precio = productos[0].precio;
    int indice_mayor = 0;

    for (int i = 1; i < n; i++)
    {
        if (productos[i].precio > mayor_precio)
        {
            mayor_precio = productos[i].precio;
            indice_mayor = i;
        }
    }

    cout << "\nEl producto mas caro es: " << productos[indice_mayor].nombre
         << "\nY su precio es: " << productos[indice_mayor].precio << endl;
}

void TotalProductos(const Producto productos[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += productos[i].cantidad_en_inventario;
    }

    cout << "\nEl total del inventario de productos es: " << total << endl;
}