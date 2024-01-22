#include "Serie.h"

Serie::Serie() {}

Serie::Serie(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, int numTemp)
    : Video(tipo, nombre, genre, calif, año, dur), numTemporadas(numTemp) {}

void Serie::muestraDatos() {
    Video::muestraDatos(); 
    std::cout << "Número de Temporadas: " << numTemporadas << std::endl;
}