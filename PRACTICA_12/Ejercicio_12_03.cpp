// Materia: Programación I, Paralelo 3
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 22/05/2025
// Número de ejercicio: 3
// Problema planteado: Control de ventas de pizzas, registro y modificación de precios en archivo binario y ventas en archivo de texto.

#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Pizza
{
    int codigo;
    char nombre[30];
    char tipo[20];    
    char tamano[20];   
    float precio;
};

struct VentaPizza
{
    char ci[15];
    int codigoPizza;
    char tamano[20];
    int cantidad;
};

void AdicionarPizza(string);
void ListarPizzas(string, string);
void ModificarPrecioPizza(string);
void EliminarPizza(string);
void AdicionarVentaPizza(string);

int main()
{
    string archivoPizza = "PRODUCTO.BIN";
    string archivoVentas = "VENTAS.TXT";
    int opcion;

    do
    {
        cout << "\n--- MENU PIZZERIA ELIS ---\n";
        cout << "1. Adicionar Pizza\n";
        cout << "2. Listado de Pizzas\n";
        cout << "3. Modificar el precio de la Pizza\n";
        cout << "4. Eliminar una Pizza\n";
        cout << "5. Adicionar Venta de Pizzas\n";
        cout << "0. SALIR\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            AdicionarPizza(archivoPizza);
            break;
        case 2:
            ListarPizzas(archivoPizza, archivoVentas);
            break;
        case 3:
            ModificarPrecioPizza(archivoPizza);
            break;
        case 4:
            EliminarPizza(archivoPizza);
            break;
        case 5:
            AdicionarVentaPizza(archivoVentas);
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

void AdicionarPizza(string NombreArchivo)
{
    Pizza p;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    cout << "\n--- Registro de Pizza ---\n";
    cout << "Codigo: ";
    cin >> p.codigo;
    cin.ignore();
    cout << "Nombre: ";
    cin.getline(p.nombre, 30);
    cout << "Tipo (TRADICIONAL o ESPECIAL): ";
    cin.getline(p.tipo, 20);
    cout << "Tamaño (XS, Mediana, Grande, etc.): ";
    cin.getline(p.tamano, 20);
    cout << "Precio: ";
    cin >> p.precio;
    cin.ignore();

    if (strcmp(p.tipo, "ESPECIAL") == 0)
    {
        p.precio = p.precio * 1.10;
    }

    archivo.write((char *)&p, sizeof(Pizza));
    archivo.close();

    cout << "Pizza registrada exitosamente.\n";
}

void ListarPizzas(string NombreArchivo, string ArchivoVentas)
{
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);
    Pizza p;

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    VentaPizza v;
    int cantidadVendida;
    float total;

    cout << "\n--- LISTADO DE PIZZAS ---\n";
    cout << left << setw(10) << "CODIGO"
         << setw(15) << "NOMBRE"
         << setw(12) << "TIPO"
         << setw(12) << "TAMANO"
         << setw(10) << "PRECIO"
         << setw(10) << "VENDIDA"
         << setw(10) << "TOTAL" << endl;

    while (archivo.read((char *)&p, sizeof(Pizza)))
    {
        cantidadVendida = 0;
        total = 0;

        ifstream ventas(ArchivoVentas);
        if (ventas.is_open())
        {
            while (ventas.getline(v.ci, 15, ';'))
            {
                ventas >> v.codigoPizza;
                ventas.ignore();
                ventas.getline(v.tamano, 20, ';');
                ventas >> v.cantidad;
                ventas.ignore();

                if (v.codigoPizza == p.codigo && strcmp(v.tamano, p.tamano) == 0)
                {
                    cantidadVendida += v.cantidad;
                    total += v.cantidad * p.precio;
                }
            }

            ventas.close();
        }

        cout << left << setw(10) << p.codigo
             << setw(15) << p.nombre
             << setw(12) << p.tipo
             << setw(12) << p.tamano
             << setw(10) << p.precio
             << setw(10) << cantidadVendida
             << setw(10) << total << endl;
    }

    archivo.close();
}

void ModificarPrecioPizza(string NombreArchivo)
{
    fstream archivo;
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);

    if (archivo.fail())
    {
        cout << "Error al abrir el archivo\n";
        return;
    }

    Pizza p;
    int codigoModificar;
    bool encontrado = false;

    cout << "Ingrese el codigo de la pizza a modificar: ";
    cin >> codigoModificar;

    while (archivo.read((char *)&p, sizeof(Pizza)))
    {
        if (p.codigo == codigoModificar)
        {
            cout << "Ingrese nuevo precio: ";
            cin >> p.precio;

            if (strcmp(p.tipo, "ESPECIAL") == 0)
            {
                p.precio = p.precio * 1.10;
            }

            archivo.seekp((long)archivo.tellg() - sizeof(Pizza), ios::beg);
            archivo.write((char *)&p, sizeof(Pizza));
            encontrado = true;
            break;
        }
    }

    archivo.close();

    if (encontrado)
    {
        cout << "Precio modificado exitosamente.\n";
    }
    else
    {
        cout << "Pizza no encontrada.\n";
    }
}

void EliminarPizza(string NombreArchivo)
{
    ifstream archivo;
    archivo.open(NombreArchivo, ios::binary);
    ofstream temp;
    temp.open("TEMP.BIN", ios::binary);

    if (archivo.fail() || temp.fail())
    {
        cout << "Error al abrir los archivos.\n";
        return;
    }

    Pizza p;
    int codigoEliminar;
    bool eliminado = false;

    cout << "Ingrese el codigo de la pizza a eliminar: ";
    cin >> codigoEliminar;

    while (archivo.read((char *)&p, sizeof(Pizza)))
    {
        if (p.codigo != codigoEliminar)
        {
            temp.write((char *)&p, sizeof(Pizza));
        }
        else
        {
            eliminado = true;
        }
    }

    archivo.close();
    temp.close();

    remove(NombreArchivo.c_str());
    rename("TEMP.BIN", NombreArchivo.c_str());

    if (eliminado)
    {
        cout << "Pizza eliminada correctamente.\n";
    }
    else
    {
        cout << "Pizza no encontrada.\n";
    }
}

void AdicionarVentaPizza(string NombreArchivo)
{
    VentaPizza v;
    ofstream archivo;
    archivo.open(NombreArchivo, ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo de ventas.\n";
        return;
    }

    cout << "\n--- Registrar Venta ---\n";
    cout << "CI Cliente: ";
    cin.getline(v.ci, 15);
    cout << "Codigo de Pizza: ";
    cin >> v.codigoPizza;
    cin.ignore();
    cout << "Tamaño: ";
    cin.getline(v.tamano, 20);
    cout << "Cantidad: ";
    cin >> v.cantidad;
    cin.ignore();

    archivo << v.ci << ";" << v.codigoPizza << ";" << v.tamano << ";" << v.cantidad << endl;
    archivo.close();

    cout << "Venta registrada exitosamente.\n";
}