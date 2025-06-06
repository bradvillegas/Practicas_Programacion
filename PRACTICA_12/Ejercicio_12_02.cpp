// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 2
// Problema planteado: Registro de productos, ventas y generación de reporte en una farmacia usando archivos binarios y de texto.

#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Producto
{
    int codigo;
    char nombre[30];
    int cantidadInicial;
    float precio;
};

struct Venta
{
    char ci[15];
    char nombreCliente[30];
    int codigoProducto;
    int cantidadVendida;
};

void AdicionarProducto(string);
void ListarProductos(string, string);
void EliminarProducto(string);
void ModificarProducto(string);
void AdicionarVentas(string);

int main()
{
    string archivoProductos = "PRODUCTOS.BIN";
    string archivoVentas = "VENTAS.txt";
    int opcion;

    do
    {
        cout << "\n--- MENU FARMACIA CHAVEZ ---\n";
        cout << "1. Adicionar Producto\n";
        cout << "2. Listado de Productos\n";
        cout << "3. Eliminar un Producto\n";
        cout << "4. Modificar un Producto\n";
        cout << "5. Adicionar Ventas del Producto\n";
        cout << "0. SALIR\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            AdicionarProducto(archivoProductos);
            break;
        case 2:
            ListarProductos(archivoProductos, archivoVentas);
            break;
        case 3:
            EliminarProducto(archivoProductos);
            break;
        case 4:
            ModificarProducto(archivoProductos);
            break;
        case 5:
            AdicionarVentas(archivoVentas);
            break;
        case 0:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
        }

    } while (opcion != 0);

    return 0;
}

void AdicionarProducto(string NombreArchivo)
{
    Producto p;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::app);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    cout << "\n--- Registro de Producto ---\n";
    cout << "Ingrese codigo: ";
    cin >> p.codigo;
    cin.ignore();
    cout << "Ingrese nombre: ";
    cin.getline(p.nombre, 30);
    cout << "Ingrese cantidad inicial: ";
    cin >> p.cantidadInicial;
    cout << "Ingrese precio unitario: ";
    cin >> p.precio;
    cin.ignore();

    archivo.write((char *)&p, sizeof(Producto));
    archivo.close();

    cout << "Producto registrado exitosamente.\n";
}

void ListarProductos(string NombreArchivo, string ArchivoVentas)
{
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);
    Producto p;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    Venta v;
    int totalVendida;
    float totalGanancia;

    cout << "\n--- LISTADO DE PRODUCTOS ---\n";
    cout << left << setw(10) << "CODIGO"
         << setw(20) << "NOMBRE"
         << setw(10) << "CANTIDAD"
         << setw(10) << "PRECIO"
         << setw(15) << "VENDIDA"
         << setw(10) << "TOTAL" << endl;

    while (archivo.read((char *)&p, sizeof(Producto)))
    {
        totalVendida = 0;
        totalGanancia = 0;

        ifstream ventas(ArchivoVentas);
        if (ventas.is_open())
        {
            while (ventas.getline(v.ci, 15, ';'))
            {
                ventas.getline(v.nombreCliente, 30, ';');
                ventas >> v.codigoProducto;
                ventas.ignore();
                ventas >> v.cantidadVendida;
                ventas.ignore();

                if (v.codigoProducto == p.codigo)
                {
                    totalVendida += v.cantidadVendida;
                    totalGanancia += v.cantidadVendida * p.precio;
                }
            }

            ventas.close();
        }

        cout << left << setw(10) << p.codigo
             << setw(20) << p.nombre
             << setw(10) << p.cantidadInicial
             << setw(10) << p.precio
             << setw(15) << totalVendida
             << setw(10) << totalGanancia << endl;
    }

    archivo.close();
}

void EliminarProducto(string NombreArchivo)
{
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);

    ofstream temp;
    temp.open("TEMP.BIN", ios::binary);

    if (archivo.fail() || temp.fail())
    {
        cout << "Error al abrir los archivos\n";
        return;
    }

    Producto p;
    int codigoEliminar;
    bool encontrado = false;

    cout << "Ingrese el codigo del producto a eliminar: ";
    cin >> codigoEliminar;

    while (archivo.read((char *)&p, sizeof(Producto)))
    {
        if (p.codigo != codigoEliminar)
        {
            temp.write((char *)&p, sizeof(Producto));
        }
        else
        {
            encontrado = true;
        }
    }

    archivo.close();
    temp.close();

    remove(NombreArchivo.c_str());
    rename("TEMP.BIN", NombreArchivo.c_str());

    if (encontrado)
    {
        cout << "Producto eliminado exitosamente.\n";
    }
    else
    {
        cout << "Producto no encontrado.\n";
    }
}

void ModificarProducto(string NombreArchivo)
{
    fstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    Producto p;
    int codigoModificar;
    bool encontrado = false;

    cout << "Ingrese el codigo del producto a modificar: ";
    cin >> codigoModificar;

    while (archivo.read((char *)&p, sizeof(Producto)))
    {
        if (p.codigo == codigoModificar)
        {
            cout << "Producto encontrado. Ingrese nuevo precio: ";
            cin >> p.precio;

            archivo.seekp((long)archivo.tellg() - sizeof(Producto), ios::beg);
            archivo.write((char *)&p, sizeof(Producto));
            encontrado = true;
            break;
        }
    }

    archivo.close();

    if (encontrado)
    {
        cout << "Producto modificado correctamente.\n";
    }
    else
    {
        cout << "Producto no encontrado.\n";
    }
}

void AdicionarVentas(string NombreArchivo)
{
    Venta v;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo de ventas\n";
        return;
    }

    cout << "\n--- Adicionar Venta ---\n";
    cout << "CI cliente: ";
    cin.getline(v.ci, 15);
    cout << "Nombre cliente: ";
    cin.getline(v.nombreCliente, 30);
    cout << "Codigo producto: ";
    cin >> v.codigoProducto;
    cout << "Cantidad vendida: ";
    cin >> v.cantidadVendida;
    cin.ignore();

    archivo << v.ci << ";" << v.nombreCliente << ";" << v.codigoProducto << ";" << v.cantidadVendida << endl;
    archivo.close();

    cout << "Venta registrada correctamente.\n";
}
