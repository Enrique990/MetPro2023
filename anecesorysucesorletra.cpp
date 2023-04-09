#include <iostream>

using namespace std;

int main() {
    char letra, letra_anterior, letra_siguiente;

    cout << "Ingrese una letra: ";
    cin >> letra;

    letra_anterior = letra - 1;
    letra_siguiente = letra + 1;

    cout << "La letra anterior es: " << letra_anterior << endl;
    cout << "La letra siguiente es: " << letra_siguiente << endl;

    return 0;
}