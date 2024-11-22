/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/
#include <string>
#include <ctime>
#include <Asiento.h>
using namespace std;

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble {
    private:
        int capacidad;
        string direccion;
        Asiento asientos[];
    public:
        Inmueble();
        Inmueble(int capacidad, string direccion, Asiento asientos[]);
        ~Inmueble();
        int getCapacidad();
        string getDireccion();
        Asiento getAsientos();
        void setCapacidad(int capacidad);
        void setDireccion(string direccion);
        void setAsientos();
};

#endif //INMUEBLE_H