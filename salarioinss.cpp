#include <iostream>

using namespace std;

int main() {
  float salario_base, descuento_inss;
  
  cout << "Ingrese su salario base: ";
  cin >> salario_base;
  
  descuento_inss = salario_base * 0.07;
  
  cout << "El descuento del INSS es: $" << descuento_inss << endl;
  
  return 0;
}