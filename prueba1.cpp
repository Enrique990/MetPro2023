#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int num1, num2;  
  cout<< "Escriba un numero para elevarlo al cuadrado ";
  cin>> num1;
  cout<< "Escriba un numero para elevarlo al cubo ";
  cin>> num2;
  num1 = num1 * num1;
  num2 = num2 * num2 * num2;
  cout<< "El cuadrado del primer numero es: " <<num1<<endl;
  cout<< "El cuadrado del segundo numero es: " <<num2<<endl;
    return 0;
}