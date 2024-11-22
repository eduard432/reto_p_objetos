
#include <iostream>
#include <string>

using namespace std;

void print(string text) {
    cout << text << endl;
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
            
        }
    } while (operacion != 0);

    return 0;
}
