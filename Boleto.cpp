/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/
# include <random>
#include "Boleto.h"
#include <iostream>
using namespace std;

Boleto::Boleto() {}

Boleto::Boleto(Concierto concierto, int cantidad) {
    this->codigoAcceso = to_string(rand());
    this->concierto = concierto;
    this->cantidad = cantidad;
}

Boleto::~Boleto() {}

string Boleto::getCodigoAcceso() {
    return this->codigoAcceso;
}

int Boleto::getCantidad() {
    return this->cantidad;
}

Concierto Boleto::getConcierto()
{
    return concierto;
}

void Boleto::setConcierto(Concierto concierto)
{
    this->concierto = concierto;
}

void Boleto::mostrarBoleto() {
    cout << "Código de acceso: " << codigoAcceso << endl;
    cout << "Cantidad de boletos: " << cantidad << endl;

    cout << "Concierto: " << concierto.getNombre() << endl;
    cout << "Artista: " << concierto.getArtista() << endl;
    cout << "Genero: " << concierto.getGenero() << endl;
    cout << "Fecha: " << concierto.getFecha() << endl;
    cout << "Hora: " << concierto.getHora() << endl;
    cout << "Lugar: " << concierto.getLugar().getDireccion() << endl;

}


