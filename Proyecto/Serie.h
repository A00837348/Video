#ifndef SERIE_H
#define SERIE_H

#include "Video.h"

class Serie : public Video {
private:
    int numTemporadas;

public:
    Serie();
    Serie(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur, int numTemp);

    void muestraDatos();
};

#endif