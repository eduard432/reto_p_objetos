/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Boleto.h"

    class Cliente {
    private:
        string nombre;
        string correo;
        string contrasenia;
        static const int MAX_BOLETOS = 20;
        Boleto boletosComprados[MAX_BOLETOS];
        int numBoletos;

    public:
        Cliente();
        Cliente(string nombre, string correo, string contrasenia);
        ~Cliente();

        string getNombre();
        string getCorreo();
        string getContrasenia();
        void setNombre(string nombre);
        void setCorreo(string correo);
        void setContrasenia(string contrasenia);
        bool iniciarSesion(string correo, string contrasenia);
        bool verificarRegistro(Cliente clientes[], int numClientes);
        bool agregarBoleto(Boleto boleto);
        void mostrarBoletosComprados();
};

#endif //CLIENTE_H