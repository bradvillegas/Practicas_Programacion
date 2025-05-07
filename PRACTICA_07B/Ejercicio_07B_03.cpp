// Materia: Programación I, Paralelo 3
// Autor: Brad Beymar Villegas Castro
// Fecha creación: 21/04/2024
// Número de ejercicio: 3
// Problema planteado: Determinar zonas seguras en un mapa con muertos vivientes

#include <iostream>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

void MostrarMatriz(char matriz[FILAS][COLUMNAS]);
int FilasSinMuertos(char matriz[FILAS][COLUMNAS]);
int ColumnasSinMuertos(char matriz[FILAS][COLUMNAS]);
void CoordenadasMuertos(char matriz[FILAS][COLUMNAS], int filas[], int columnas[], int &cantidad);
int ContarMuertos(char matriz[FILAS][COLUMNAS]);
bool PrimeraColumnaPeligrosa(char matriz[FILAS][COLUMNAS]);

int main()
{
    char matriz[FILAS][COLUMNAS] = 
    {
        {'x', 'o', 'x', 'o'},
        {'o', 'o', 'o', 'o'},
        {'o', 'o', 'x', 'o'}
    };

    MostrarMatriz(matriz);

    cout << "Filas sin muertos: " << FilasSinMuertos(matriz) << endl;
    cout << "Columnas sin muertos: " << ColumnasSinMuertos(matriz) << endl;

    int filas[12], columnas[12], cantidad;
    CoordenadasMuertos(matriz, filas, columnas, cantidad);

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Muerto en: (" << filas[i] << ", " << columnas[i] << ")" << endl;
    }

    cout << "Total muertos: " << ContarMuertos(matriz) << endl;

    if (PrimeraColumnaPeligrosa(matriz))
    {
        cout << "no es posible entrar al complejo" << endl;
    }
    else
    {
        cout << "es posible entrar al complejo" << endl;
    }

    return 0;
}

void MostrarMatriz(char matriz[FILAS][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int FilasSinMuertos(char matriz[FILAS][COLUMNAS])
{
    int contador = 0;
    for (int i = 0; i < FILAS; i++)
    {
        bool tieneMuerto = false;
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] == 'x')
            {
                tieneMuerto = true;
                break;
            }
        }
        if (!tieneMuerto)
        {
            contador++;
        }
    }
    return contador;
}

int ColumnasSinMuertos(char matriz[FILAS][COLUMNAS])
{
    int contador = 0;
    for (int j = 0; j < COLUMNAS; j++)
    {
        bool tieneMuerto = false;
        for (int i = 0; i < FILAS; i++)
        {
            if (matriz[i][j] == 'x')
            {
                tieneMuerto = true;
                break;
            }
        }
        if (!tieneMuerto)
        {
            contador++;
        }
    }
    return contador;
}

void CoordenadasMuertos(char matriz[FILAS][COLUMNAS], int filas[], int columnas[], int &cantidad)
{
    cantidad = 0;
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] == 'x')
            {
                filas[cantidad] = i;
                columnas[cantidad] = j;
                cantidad++;
            }
        }
    }
}

int ContarMuertos(char matriz[FILAS][COLUMNAS])
{
    int contador = 0;
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] == 'x')
            {
                contador++;
            }
        }
    }
    return contador;
}

bool PrimeraColumnaPeligrosa(char matriz[FILAS][COLUMNAS])
{
    int muertos = 0;
    for (int i = 0; i < FILAS; i++)
    {
        if (matriz[i][0] == 'x')
        {
            muertos++;
        }
    }
    return muertos >= 2;
}
