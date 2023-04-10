#include<iostream>

using namespace std;

//calcular una calculadora para multiplicar

void obtenerTabla(int num);

int main(int argc, char const *argv[]){
    int numero;
    cout << "Dime un #: ";
    cin >> numero;
    obtenerTabla(numero);
    return 0;
}

void obtenerTabla(int num){
    for(int i=1; i<= 12; i++){
        cout<< num<< " * " << i << " = "
        << num * i << endl;
    }
}