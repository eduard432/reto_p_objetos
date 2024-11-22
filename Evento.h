/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/
#include <string>
#include <Inmueble.h>
using namespace std;

#ifndef EVENTO_H
#define EVENTO_H

class Evento {
    private:
        string nombre, artista, categoria, fecha;
        Inmueble lugar;
    public:
        Evento();
        Evento(string nombre, string artista, string categoria, string fecha, Inmueble lugar);
        ~Evento();
        string getNombre();
        string getArtista();
        string getCategoria();
        string getFecha();
        Inmueble getLugar();
        void setNombre(string nombre);
        void setArtista(string artista); 
        void setCategoria(string categoria); 
        void setFecha(string fecha);
        void setLugar(Inmueble lugar);   
        
};

#endif //EVENTO_H