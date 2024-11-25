/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
using namespace std;

#include "Inmueble.h"

Inmueble::Inmueble() {}

Inmueble::Inmueble(string direccion, int capacidad) {
    this->direccion = direccion;
    this->capacidad = capacidad;
}

Inmueble::~Inmueble() {}

string Inmueble::getDireccion() {
    return direccion;
}

int Inmueble::getCapacidad() {
    return capacidad;
}

void Inmueble::setDireccion(string direccion) {
    this->direccion = direccion;
}

void Inmueble::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}


