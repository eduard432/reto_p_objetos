/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
using namespace std;

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble {
    private:
        string direccion;
        int capacidad;

    public:
        Inmueble();
        Inmueble(string direccion, int capacidad);
        ~Inmueble();
        string getDireccion();
        int getCapacidad();
        void setDireccion(string direccion);
        void setCapacidad(int capacidad);
};

#endif //INMUEBLE_H
