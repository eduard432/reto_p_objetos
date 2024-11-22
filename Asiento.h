/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/
#include <string>
using namespace std;

#ifndef ASIENTO_H
#define ASIENTO_H

class Asiento {
    private:
        string fila, columna;
    public:
        Asiento();
        Asiento(string fila, string columna);
        ~Asiento();
        string getFila();
        string getColumna();
        void setFila(string fila);
        void setColumna(string columna);
};

#endif //ASIENTO_H