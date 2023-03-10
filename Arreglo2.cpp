#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int numeros[100];
   int cant;
   cout << "Cuantos numeros queres ingresar: ";
   cin >> cant;
   if(cant >100){
    cout <<"No se puede evaluar mas de 100";
   }else{
    for(int i =0; i<cant; i++){
        cout << "Dime un #: ";
        cin >> numeros[i];
    }
    cout << "Los numeros pares son: " << endl;
    for(int i = 0; i< cant; i++){
        if(numeros[i]%2==0) cout << numeros[i]<< "\n";
    }
   }

    
    return 0;
}
