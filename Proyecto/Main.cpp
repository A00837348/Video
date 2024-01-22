#include "Pelicula.h"
#include "Serie.h"

int main() {
    Pelicula pelicula1("Película", "El Origen", "Ciencia Ficción", 0, 2010, 148, "Warner Bros");
    Pelicula pelicula2("Película", "La La Land", "Musical", 0, 2016, 128, "Summit Entertainment");

    Serie serie1("Serie", "Stranger Things", "Drama", 0, 2016, 50, 3);
    Serie serie2("Serie", "The Mandalorian", "Aventura", 0, 2019, 40, 2);
    Serie serie3("Serie", "The Crown", "Drama", 0, 2016, 50, 3);

    int opcion;

    do {
        std::cout << "Menú:1. Mostrar información de películas";
        std::cout << "2. Mostrar información de series ";
        std::cout << "3. Calificar un video 4. Salir";
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Información de la película 1:";
                pelicula1.muestraDatos();

                std::cout << "Información de la película 2:";
                pelicula2.muestraDatos();
                break;

            case 2:
                std::cout << "Información de la serie 1:";
                serie1.muestraDatos();

                std::cout << "Información de la serie 2:";
                serie2.muestraDatos();

                std::cout << "Información de la serie 3:";
                serie3.muestraDatos();
                break;

            case 3:
                int nuevaCalificacion;
                std::cout << "Ingrese la nueva calificación para un video: ";
                std::cin >> nuevaCalificacion;
                
                pelicula1.calificaVideo(nuevaCalificacion);
                std::cout << "Calificación actualizada.";
                break;

            case 4:
                std::cout << "Saliendo del programa.";
                break;

            default:
                std::cout << "Opción no válida. Intente de nuevo.";
        }

    } while (opcion != 4);

    return 0;
}