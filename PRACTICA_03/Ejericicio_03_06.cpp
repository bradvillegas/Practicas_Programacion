// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 6
// Problema planteado: Determinar cuántos días tiene un mes

#include <iostream>
using namespace std;

bool esBisiesto(int año)
{
    return (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0));
}

int obtenerDiasDelMes(int mes, int año)
{
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        return 30;
    }
    else if (mes == 2)
    {
        return esBisiesto(año) ? 29 : 28;
    }
    return 31;
}

int main()
{
    int mes, año;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> año;
    int dias = obtenerDiasDelMes(mes, año);
    cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    return 0;
}
