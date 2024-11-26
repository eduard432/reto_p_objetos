/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
#include "Inmueble.h"
using namespace std;

#ifndef CONCIERTO_H
#define CONCIERTO_H

class Concierto {
    private:
        string nombre;
        string artista;
        string genero;
        string fecha;
        string hora;
        Inmueble lugar;
        int limiteCompra;

    public:
        Concierto();
        Concierto(string nombre, string artista, string genero, string fecha, string hora, Inmueble lugar, int limiteCompra);
        ~Concierto();
        string getNombre();
        string getArtista();
        string getGenero();
        string getFecha();
        string getHora();
        Inmueble getLugar();
        int getLimiteCompra();
        void setNombre(string nombre);
        void setArtista(string artista);
        void setGenero(string genero);
        void setFecha(string fecha);
        void setHora(string hora);
        void setLugar(Inmueble lugar);
        void mostrarConcierto();

};

#endif //CONCIERTO_H
