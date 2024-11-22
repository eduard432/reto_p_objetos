/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/
#include <string>
#include <Boleto.h>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente {
    private:
        string correo, contrasenia;
        Boleto boletos[];
    public:
        Cliente();
        Cliente(string correo, string contrasenia);
        ~Cliente();
        string getCorreo();
        string getContrasenia();
        Boleto getBoletos();
        void setCorreo(string correo);
        void setContrasenia(string contrasenia);
        void setBoletos(Boleto boletos[]);
        bool iniciarSesion(string correo, string contrasenia);
};

#endif //CLIENTE_H