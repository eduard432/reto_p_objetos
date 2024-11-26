/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include "Concierto.h"
#include <iostream>

Concierto::Concierto() {}

Concierto::Concierto(string nombre, string artista, string genero, string fecha, string hora, Inmueble lugar,int limiteCompra) {
    this->nombre = nombre;
    this->artista = artista;
    this->genero = genero;
    this->fecha = fecha;
    this->hora = hora;
    this->lugar = lugar;
    this->limiteCompra = limiteCompra;
}

Concierto::~Concierto() {}

string Concierto::getNombre() {
    return nombre;
}

string Concierto::getArtista() {
    return artista;
}

string Concierto::getGenero() {
    return genero;
}

string Concierto::getFecha() {
    return fecha;
}

string Concierto::getHora() {
    return hora;
}

Inmueble Concierto::getLugar() {
    return lugar;
}

int Concierto::getLimiteCompra() {
    return limiteCompra;
}

void Concierto::setNombre(string nombre) {
    this->nombre = nombre;
}

void Concierto::setArtista(string artista) {
    this->artista = artista;
}

void Concierto::setGenero(string genero) {
    this->genero = genero;
}

void Concierto::setFecha(string fecha) {
    this->fecha = fecha;
}

void Concierto::setHora(string hora) {
    this->hora = hora;
}

void Concierto::setLugar(Inmueble lugar) {
    this->lugar = lugar;
}

void Concierto::mostrarConcierto() {
    cout << "Concierto: " << nombre << endl;
    cout << "Artista: " << artista << endl;
    cout << "Genero: " << genero << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout << "Lugar: " << lugar.getDireccion() << endl;
    cout << "Cantidad Máxima: " << limiteCompra << endl;
}

