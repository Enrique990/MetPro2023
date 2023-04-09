#include <iostream>

using namespace std;

bool esPar(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPar(num)) {
        cout << num << " es un numero par" << endl;
    } else {
        cout << num << " es un numero impar" << endl;
    }

    return 0;
}