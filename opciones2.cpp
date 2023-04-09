#include <iostream>

using namespace std;

void tablaMultiplicar(int num) {
    if (num > 0 && num < 12) {
        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
    else {
        cout << "El numero ingresado no es valido." << endl;
    }
}

float convertirKbMg(float kb) {
    return kb / 1024;
}

float convertirTbGb(float tb) {
    return tb * 1024;
}

void imprimirRango(int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int opcion = 0;

    while (opcion != 5) {
        cout << "1. Calcular tabla de multiplicar." << endl;
        cout << "2. Convertir Kb a Mg." << endl;
        cout << "3. Convertir Tb a Gb." << endl;
        cout << "4. Imprimir rango de numeros." << endl;
        cout << "5. Salir." << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Ingrese un numero para calcular su tabla de multiplicar: ";
                cin >> num;
                tablaMultiplicar(num);
                break;
            }
            case 2: {
                float kb;
                cout << "Ingrese la cantidad de Kb a convertir a Mg: ";
                cin >> kb;
                cout << kb << " Kb son " << convertirKbMg(kb) << " Mg." << endl;
                break;
            }
            case 3: {
                float tb;
                cout << "Ingrese la cantidad de Tb a convertir a Gb: ";
                cin >> tb;
                cout << tb << " Tb son " << convertirTbGb(tb) << " Gb." << endl;
                break;
            }
            case 4: {
                int a, b;
                cout << "Ingrese el rango de numeros a imprimir (a b): ";
                cin >> a >> b;
                imprimirRango(a, b);
                break;
            }
            case 5: {
                cout << "Saliendo..." << endl;
                break;
            }
            default: {
                cout << "Opción no válida." << endl;
                break;
            }
        }
    }

    return 0;
}