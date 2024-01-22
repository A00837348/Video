#include "Pelicula.h"

Pelicula::Pelicula() {}

Pelicula::Pelicula(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, std::string estudio)
    : Video(tipo, nombre, genre, calif, año, dur), estudio(estudio) {}

void Pelicula::muestraDatos() {
    Video::muestraDatos(); 
    std::cout << "Estudio: " << estudio << std::endl;
}