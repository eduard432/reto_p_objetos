/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
using namespace std;

#include "Concierto.h"

#ifndef BOLETO_H
#define BOLETO_H

class Boleto {
    private:
        string codigoAcceso;
        Concierto concierto;
        int cantidad;

    public:
        Boleto();
        Boleto(Concierto concierto, int cantidad);
        ~Boleto();
        string getCodigoAcceso();
        Concierto getConcierto();
        int getCantidad();
        void setcodigoAcceso(string codigoAcceso);
        void setConcierto(Concierto concierto);
        void mostrarBoleto();
        //string generarCodigo();
    };


#endif //BOLETO_H