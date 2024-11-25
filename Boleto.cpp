/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/
# include <random>
#include "Boleto.h"

Boleto::Boleto() {}

Boleto::Boleto(Concierto concierto) {
    this->codigoAcceso = rand();
    this->concierto = concierto;
}

Boleto::~Boleto() {}

string Boleto::getCodigoAcceso() {
    return this->codigoAcceso;
}

Concierto Boleto::getConcierto()
{
    return concierto;
}

void Boleto::setConcierto(Concierto concierto)
{
    this->concierto = concierto;
}