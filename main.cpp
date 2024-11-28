/*
    Mariana Ponce A01668399
    Eduardo Barron Cisneros A01669505
    22/11/2024
*/

#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#include "Concierto.h"
#include "Inmueble.h"
#include "Cliente.h"

// Se crean inmuebles dummies
Inmueble inmueble1("Foro Sol", 20);
Inmueble inmueble2("Estadio Azteca", 30);
Inmueble inmueble3("Auditorio Nacional", 100);
Inmueble inmueble4("Teatro Metropólitan", 60);
Inmueble inmueble5("Arena Ciudad de Mexico", 40);
Inmueble inmueble6("Palacio de los Deportes", 30);

// Se crean  conciertos dummies
const int MAX_CONCIERTOS = 5;
Concierto conciertos[MAX_CONCIERTOS] = {
    Concierto("Guts Tour", "Olivia Rodrigo", "Pop/Rock", "02/04/2025", "19:00", inmueble2, 6),
    Concierto("Las mujeres ya no lloran", "Shakira", "Pop", "21/03/2025", "23:00", inmueble5, 8),
    Concierto("Coca Cola Flow Fest", "Varios", "Varios", "19/06/2025", "13:00", inmueble3, 10),
    Concierto("The Clancy Tour", "Twenty One Pilots", "Rock Alternativo", "10/11/2025", "20:00", inmueble1, 6),
    Concierto("Domin Tour", "Stray Kids", "K-Pop", "04/03/2025", "21:00", inmueble2, 5),
};

// Se crean clientes dummies
const int MAX_CLIENTES = 10;
Cliente clientes[MAX_CLIENTES] = {
    Cliente("Juan", "juan@ejemplo.com", "123"),
    Cliente("Maria", "maria@ejemplo.com", "456"),
    Cliente("Pedro", "pedro@ejemplo.com", "789"),
    Cliente("Ana", "ana@ejemplo.com", "abc"),
    Cliente("Luis", "luis@ejemplo.com", "def")
};

int numClientes = 5; // Número actual de clientes registrados

// Menú de cliente para compras
void menuCliente(Cliente cliente) {
    int opcionCliente;
    int opcionConcierto;
    bool salir = false;

    while(!salir) {
        cout << "------------------------------" << endl;
        cout << "Bienvenido " << cliente.getNombre() << endl;
        cout << "------------------------------" << endl;
        cout << "1. Comprar boletos" << endl;
        cout << "2. Ver mis boletos" << endl;
        cout << "3. Salir" << endl;
        cout << "------------------------------" << endl;
        cin >> opcionCliente;

        // Si el cliente elige comprar boletos
        if(opcionCliente == 1) {
            cout << "------------------------------" << endl;
            cout << "Lista de conciertos disponibles:" << endl;
            // Muestra los conciertos disponibles
            for (int i = 0; i < MAX_CONCIERTOS; i++) {
                cout << i + 1 << ". " <<endl;
                conciertos[i].mostrarConcierto();
            }
            cout << "------------------------------" << endl;
            cout << "Seleccione el numero del concierto que desea comprar boletos:  ";
            cin >> opcionConcierto;

            int cantidad;
            cout << "------------------------------" << endl;
            cout << "Selecciona la cantidad de boletos: ";
            cin >> cantidad;

            // Verifica que la opción de concierto y la cantidad de boletos sean válidas
            if (opcionConcierto >= 1 && opcionConcierto <= MAX_CONCIERTOS && cantidad>=1) {
                cout << "------------------------------" << endl;
                cout << "Has seleccionado el concierto: " << endl;
                Concierto conciertoSelec = conciertos[opcionConcierto - 1];
                Boleto boleto = Boleto(conciertoSelec, cantidad);
                boleto.mostrarBoleto();
                cliente.agregarBoleto(boleto);
            } else {
                cout << "------------------------------" << endl;
                cout << "Opcion no valida" << endl;
            }

        // Si el cliente elige ver sus boletos
        } else if(opcionCliente == 2) {
            cout << "------------------------------" << endl;
            cliente.mostrarBoletosComprados();

        // Si el cliente decide salir
        } else if(opcionCliente == 3) {
            salir = true;
        } else {
            cout << "------------------------------" << endl;
            cout << "Opcion no valida, intente de nuevo" << endl;
        }
    }
}

// Menú de sesión donde el cliente puede iniciar sesión o registrarse
Cliente menuSesion() {
    int opcionSesion;
    bool inicioSesion = false;
    string nombre, correo, contrasenia;

    while(!inicioSesion) {
        cout << "------------------------------" << endl;
        cout << "   Bienvenido a TicketMister  " << endl;
        cout << "------------------------------" << endl;
        cout << "1. Iniciar sesion             " << endl;
        cout << "2. Registrarse                " << endl;
        cout << "------------------------------" << endl;
        cin >> opcionSesion;

        // Si elige iniciar sesión, solicita correo y contraseña
        if(opcionSesion == 1) {
            cout << "------------------------------" << endl;
            cout << "Ingrese su correo: ";
            cin >> correo;
            cout << "Ingrese su contrasenia: ";
            cin >> contrasenia;

            // Verifica si los datos coinciden con algún cliente registrado
            for (int i = 0; i < numClientes; i++) {
                if (clientes[i].iniciarSesion(correo, contrasenia)) {
                    inicioSesion = true;
                    return clientes[i]; // Devuelve el cliente si la sesión es exitosa
                }
            }
            cout << "------------------------------" << endl;
            cout << "Datos incorrectos, intente de nuevo." << endl;
        // Si elige registrarse, solicita los datos para crear una nueva cuenta
        } else if(opcionSesion == 2) {
            cout << "------------------------------" << endl;
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese un correo: ";
            cin >> correo;
            cout << "Ingrese una contrasenia: ";
            cin >> contrasenia;

            Cliente nuevoCliente(nombre, correo, contrasenia);

            // Verifica si el correo ya está registrado
            if (nuevoCliente.verificarRegistro(clientes, numClientes)) {
                clientes[numClientes] = nuevoCliente;
                numClientes++; // Incrementa el número de clientes registrados
                cout << "------------------------------" << endl;
                cout << "Se creo la cuenta" << endl;
            } else {
                cout << "------------------------------" << endl;
                cout << "Ya hay una cuenta asociada a este correo" << endl;
            }
        } else {
            cout << "------------------------------" << endl;
            cout << "Opcion no valida, intente de nuevo" << endl;
        }
    }
    return Cliente(); // Devuelve un cliente vacío si no se logró iniciar sesión ni registrar
}

int main() {
    // Inicia el programa con la selección de sesión de un cliente
    Cliente cliente = menuSesion();
    menuCliente(cliente); // Muestra el menú del cliente después de iniciar sesión
    return 0;
}
