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

// Constructor por defecto
Cliente::Cliente() {
    numBoletos=0;
}

// Constructor asignando variables
Cliente::Cliente(string nombre, string correo, string contrasenia) {
    numBoletos=0;
    this->nombre = nombre;
    this->correo = correo;
    this->contrasenia = contrasenia;
}

// Destructor por defecto
Cliente::~Cliente() {}

// Getters
string Cliente::getNombre() {
    return nombre;
}

string Cliente::getCorreo() {
    return correo;
}

string Cliente::getContrasenia() {
    return contrasenia;
}

// Setters
void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

void Cliente::setCorreo(string correo) {
    this->correo = correo;
}

void Cliente::setContrasenia(string contrasenia) {
    this->contrasenia = contrasenia;
}

// Método para inicar sesión verificando si el correo y contraseña son iguale
bool Cliente::iniciarSesion(string correo, string contrasenia) {
    return (this->correo == correo && this->contrasenia == contrasenia);
}

// Verificar si previamente ya fue registrado el correo
bool Cliente::verificarRegistro(Cliente clientes[], int numClientes) {
    for (int i = 0; i < numClientes; i++) {
        if (clientes[i].getCorreo() == correo) {
            return false;
        }
    }
    return true;
}

// Método para agregar el boleto al registro de clientes
// Devuelve un booleano dependiendo si el boleto pudo ser agregado o no
bool Cliente::agregarBoleto(Boleto boletoRecienComprado) {
    // Obtenemos el concierot a partir del Boleto recibido
    Concierto concierto = boletoRecienComprado.getConcierto();
    // Obtenemos datos del concierto
    int cantidadConcierto = concierto.getLimiteCompra();
    int cantidad = boletoRecienComprado.getCantidad();

    // Verificamos si el usuario no ha excedido su máximo de boletos
    if (numBoletos < MAX_BOLETOS) {
        // Verificamos si la cantidad de compra es menor a la compra máxima del concierto
        if(cantidad <= cantidadConcierto) {
            boletosComprados[numBoletos] = boletoRecienComprado;
            numBoletos++;
            return true;
        } else {
            cout << "No puedes comprar " << cantidad << ". El limite es: " << cantidadConcierto << endl;
            return false;
        }
    } else {
        cout << "Cantidad máxima de boletos por usuario" << endl;
        return false;
    }
    return false;
}

// Método para mostrar los boletos comprados.
void Cliente::mostrarBoletosComprados() {
    // Verificamos si el cliente tiene boletos
    if (numBoletos == 0) {
        cout << "No has comprado boletos." << endl;
        return;
    }
    cout << "Tus boletos comprados son:" << endl;
    // Recorremos cada boleto del cliente y lo mostramos
    for (int i = 0; i < numBoletos; i++) {
        boletosComprados[i].mostrarBoleto();
        cout << "------------------------------" << endl;
    }
}