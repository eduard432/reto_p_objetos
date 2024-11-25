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

    public:
        Boleto();
        Boleto(Concierto concierto);
        ~Boleto();
        string getCodigoAcceso();
        Concierto getConcierto();
        void setcodigoAcceso(string codigoAcceso);
        void setConcierto(Concierto concierto);
        //string generarCodigo();
    };


#endif //BOLETO_H