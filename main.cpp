/*
 Mariana Ponce A01668399
 Eduardo Barron Cisneros A01669505
 22/11/2024
*/

#include <iostream>
#include <string>
#include <Cliente.h>

using namespace std;

void print(string text) {
    cout << text << endl;
}




void crearCuenta () {
    string contrasenia, correo;
    print("----------------------------");
    print("Introduce tu correo:");
    cin >> correo;
    print("----------------------------");
    print("Introduce tu contraseña:");
    cin >> contrasenia;

    Cliente cliente = Cliente(correo, contrasenia);
    

    return 
}


int menu () {
    int operacion;
    print("----------------------------");
    print("Introduce la operación a realizar:");
    print("----------------------------");
    print("1.-Iniciar sesion");
    print("----------------------------");
    print("2.-Crear cuenta");
    cin >> operacion;
    return operacion;
}

int main() {
    int operacion;
    do {
        operacion = menu();

        if (operacion == 1){            
            crearCuenta();
        }
    } while (operacion != 0);

    return 0;
}
