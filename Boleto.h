/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/
#include <string>
#include <ctime>
using namespace std;

#ifndef BOLETO_H
#define BOLETO_H
#include "Evento.h"
#include "Asiento.h"
using namespace std;

class Boleto {
    private:
        int costo;
        string fechaCompra;
        Evento evento;
        Asiento asiento;
    public:
        Boleto();
        Boleto(int costo, string fechaCompra);
        ~Boleto();
        string getFila();
        string getColumna();
        void setFila(string fila);
        void setColumna(string columna);
};

#endif //BOLETO_H