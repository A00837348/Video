#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>

class Video {
private:
    std::string tipoVideo;
    std::string nombreVideo;
    std::string genero;
    int calificacion;
    int añoLanzamiento;
    int duracion;

public:
    Video();

    Video(std::string tipo, std::string nombre, std::string genre, int calif, int año, int dur);

    void calificaVideo(int calif);
    void muestraDatos();
};

#endif 