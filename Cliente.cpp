/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/

#include <string>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(){

}

Cliente::Cliente(string correo, string contrasenia) {
    this->correo = correo;
    this->contrasenia = contrasenia;
}

Cliente::~Cliente() {

}

string Cliente::getCorreo() {
    return correo;
}

string Cliente::getContrasenia() {
    return contrasenia;
}

void Cliente::setCorreo(string correo) {
    this->correo = correo;
}

void Cliente::setContrasenia(string contrasenia) {
    this->contrasenia = contrasenia;
}

bool Cliente::iniciarSesion(string correo, string contrasenia) {
    if (this->correo == correo && this->contrasenia == contrasenia) {
        return true;
    } else {
        return false;
    }
}