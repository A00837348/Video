#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

class Pelicula : public Video {
private:
    std::string estudio;

public:
    Pelicula();
    Pelicula(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, std::string estudio);

    void muestraDatos();
};

#endif 