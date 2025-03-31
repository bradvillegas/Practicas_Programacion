// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 27/02/2025
// Número de ejercicio: 2
// Problema planteado: (aqui pon el problema de cada ejercicio)
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int NumeroAleatorio(int limInicial, int limFin);

void GenerarVoltajes(float voltages[100]);
void DesplegarVoltajes(float voltages[100]);

void GenerarTemperaturas(float Temperaturas[50]);
void DesplegarTemperaturas(float Temperaturas[50]);

char GenerarCaracterAleatorio();
void DesplegarCadena();

void GenerarAnualidades(int Anualidades[100]);
void DesplegarAnualidades(int Anualidades[100]);

void GenerarVelocidades(float Velocidades[32]);
void DesplegarVelocidades(float Velocidades[32]);

void GenerarDistancias(float Distancias[1000]);
void DesplegarDistancias(float Distancias[1000]);

int main()
{
    float voltages[100], Temperaturas[50], Velocidades[32], Distancias[1000];
    int Anualidades[100];
    srand(time(NULL));
    GenerarVoltajes(voltages);
    DesplegarVoltajes(voltages);
    GenerarTemperaturas(Temperaturas);
    DesplegarTemperaturas(Temperaturas);
    DesplegarCadena();
    GenerarAnualidades(Anualidades);
    DesplegarAnualidades(Anualidades);
    GenerarVelocidades(Velocidades);
    DesplegarVelocidades(Velocidades);
    GenerarDistancias(Distancias);
    DesplegarDistancias(Distancias);
    return 0;
}

int NumeroAleatorio(int limInicial, int limFin)
{
    return limInicial + rand() % ((limFin + 1) - limInicial);
}

void GenerarVoltajes(float voltages[100])
{
    for (int i = 0; i < 100; i++)
    {
        voltages[i] = (float)NumeroAleatorio(20, 220) + ((float)(NumeroAleatorio(0, 99)) / 100 );
    }    
}

void DesplegarVoltajes(float voltages[100])
{
    cout << "Los 100 voltajes aleatorios son: \n";
    for (int i = 0; i < 100; i++)
    {
        cout << voltages[i] << "\n";
    }
}

void GenerarTemperaturas(float Temperaturas[50])
{
    for (int i = 0; i < 50; i++)
    {
        Temperaturas[i] = (float)NumeroAleatorio(0, 100) + ((float)(NumeroAleatorio(0, 99)) / 100 );
    }    
}

void DesplegarTemperaturas(float Temperaturas[50])
{
    cout << "Las 50 temperaturas aleatorias son: \n";
    for (int i = 0; i < 50; i++)
    {
        cout << Temperaturas[i] << "\n";
    }
}

char GenerarCaracterAleatorio()
{
    int tipo = rand() % 2;
    if (tipo == 0) 
    {
        return (rand() % 26) + (rand() % 2 ? 'A' : 'a');
    } else {
        return (rand() % 10) + '0';
    }
}
void DesplegarCadena()
{
    cout << "La cadena de 30 caracteres aleatorios es: \n";
    for (int i = 0; i < 30; i++)
    {
        cout << GenerarCaracterAleatorio() << endl;
    }
}

void GenerarAnualidades(int Anualidades[100])
{
    for (int i = 0; i < 100; i++)
    {
        Anualidades[i] = NumeroAleatorio(1990, 2025);
    }    
}

void DesplegarAnualidades(int Anualidades[100])
{
    cout << "Las 100 Anualidades aleatorios son: \n";
    for (int i = 0; i < 100; i++)
    {
        cout << Anualidades[i] << "\n";
    }
}

void GenerarVelocidades(float Velocidades[32])
{
    for (int i = 0; i < 32; i++)
    {
        Velocidades[i] = (float)NumeroAleatorio(10, 300) + ((float)(NumeroAleatorio(0, 99)) / 100 );
    }    
}

void DesplegarVelocidades(float Velocidades[32])
{
    cout << "Las 32 Velocidades aleatorias son: \n";
    for (int i = 0; i < 32; i++)
    {
        cout << Velocidades[i] << "\n";
    }
}

void GenerarDistancias(float Distancias[1000])
{
    for (int i = 0; i < 32; i++)
    {
        Distancias[i] = (float)NumeroAleatorio(1, 1000) + ((float)(NumeroAleatorio(0, 99)) / 100 );
    }    
}

void DesplegarDistancias(float Distancias[1000])
{
    cout << "Las 1000 Distancias aleatorias son: \n";
    for (int i = 0; i < 1000; i++)
    {
        cout << Distancias[i] << "\n";
    }
}