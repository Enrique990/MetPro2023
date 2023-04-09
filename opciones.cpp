#include <iostream>

using namespace std;

void registrarCliente();
void registrarProducto();
void registrarEmpleado();

int main() {
    int opcion;
    do {
        cout << "1. Registrar Cliente" << endl;
        cout << "2. Registrar Producto" << endl;
        cout << "3. Registrar Empleado" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        switch(opcion) {
            case 1:
                registrarCliente();
                break;
            case 2:
                registrarProducto();
                break;
            case 3:
                registrarEmpleado();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no valida" << endl;
                break;
        }
    } while (opcion != 4);
    return 0;
}

void registrarCliente() {
    cout << "Registrando Cliente..." << endl;
}

void registrarProducto() {
    cout << "Registrando Producto..." << endl;
}

void registrarEmpleado() {
    cout << "Registrando Empleado..." << endl;
}