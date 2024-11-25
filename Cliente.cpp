/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#include "Cliente.h"

Cliente::Cliente() {
    numBoletos=0;
}

Cliente::Cliente(string nombre, string correo, string contrasenia) {
    numBoletos=0;
    this->nombre = nombre;
    this->correo = correo;
    this->contrasenia = contrasenia;
}

Cliente::~Cliente() {}

string Cliente::getNombre() {
    return nombre;
}

string Cliente::getCorreo() {
    return correo;
}

string Cliente::getContrasenia() {
    return contrasenia;
}

void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

void Cliente::setCorreo(string correo) {
    this->correo = correo;
}

void Cliente::setContrasenia(string contrasenia) {
    this->contrasenia = contrasenia;
}

bool Cliente::iniciarSesion(string correo, string contrasenia) {
    return (this->correo == correo && this->contrasenia == contrasenia);
}

bool Cliente::verificarRegistro(Cliente clientes[], int numClientes) {
    for (int i = 0; i < numClientes; i++) {
        if (clientes[i].getCorreo() == correo) {
            return false;
        }
    }
    return true;
}

bool Cliente::agregarBoleto(Boleto boletoRecienComprado) {
    if (numBoletos < MAX_BOLETOS) {
        boletosComprados[numBoletos] = boletoRecienComprado;
        numBoletos++;
        return true;
    }
    return false;
}
void Cliente::mostrarBoletosComprados() {
    if (numBoletos == 0) {
        cout << "No has comprado boletos." << endl;
        return;
    }
    cout << "Tus boletos comprados son:" << endl;
    for (int i = 0; i < numBoletos; i++) {
        cout << "Código de acceso: " << boletosComprados[i].getCodigoAcceso() << endl;
        boletosComprados[i].getConcierto().mostrarConcierto();
    }
}