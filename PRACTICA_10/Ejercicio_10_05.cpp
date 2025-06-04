// Materia: Programación I, Paralelo 3 
// Autor: BRAD BEYMAR VILLEGAS CASTRO.
// Fecha creación: 16/05/2025
// Número de ejercicio: 5
// Problema planteado: Sistema de gestión de películas

#include <iostream>
#include <string>
using namespace std;

struct Pelicula
{
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

void RegistrarPeliculas(Pelicula peliculas[], int n);
void MostrarPeliculasPorGenero(const Pelicula peliculas[], int n, const string& genero);
void MostrarPeliculasPorDirector(const Pelicula peliculas[], int n, const string& director);

int main()
{
    int n;
    cout << "Ingrese el numero de peliculas: ";
    cin >> n;
    cin.ignore();

    Pelicula peliculas[n];

    RegistrarPeliculas(peliculas, n);

    string genero;
    cout << "\nIngrese el genero para filtrar: ";
    getline(cin, genero);
    MostrarPeliculasPorGenero(peliculas, n, genero);

    string director;
    cout << "\nIngrese el director para filtrar: ";
    getline(cin, director);
    MostrarPeliculasPorDirector(peliculas, n, director);

    return 0;
}

void RegistrarPeliculas(Pelicula peliculas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nIngrese los datos de la pelicula " << i + 1 << endl;
        cout << "Titulo: ";
        getline(cin, peliculas[i].titulo);
        cout << "Director: ";
        getline(cin, peliculas[i].director);
        cout << "Duracion (minutos): ";
        cin >> peliculas[i].duracion;
        cout << "Anio de estreno: ";
        cin >> peliculas[i].anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        getline(cin, peliculas[i].genero);
    }
}

void MostrarPeliculasPorGenero(const Pelicula peliculas[], int n, const string& genero)
{
    cout << "\nPeliculas del genero '" << genero << "':\n";
    for (int i = 0; i < n; i++)
    {
        if (peliculas[i].genero == genero)
        {
            cout << "Titulo: " << peliculas[i].titulo
                 << ", Director: " << peliculas[i].director
                 << ", Duracion: " << peliculas[i].duracion
                 << " minutos, Anio de estreno: " << peliculas[i].anio_estreno << endl;
        }
    }
}

void MostrarPeliculasPorDirector(const Pelicula peliculas[], int n, const string& director)
{
    cout << "\nPeliculas dirigidas por '" << director << "':\n";
    for (int i = 0; i < n; i++)
    {
        if (peliculas[i].director == director)
        {
            cout << "Titulo: " << peliculas[i].titulo
                 << ", Genero: " << peliculas[i].genero
                 << ", Duracion: " << peliculas[i].duracion
                 << " minutos, Anio de estreno: " << peliculas[i].anio_estreno << endl;
        }
    }
}
