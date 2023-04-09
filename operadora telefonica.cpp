#include<iostream>

using namespace std;

int main()
{
    int numero_telefonico;

    cout<< "Ingrese su numero telefonico ";
    cin>> numero_telefonico;

    int ultimo_digito = numero_telefonico % 10;

    if (ultimo_digito == 7)
    {
        cout<< "su saldo se ha duplicado";
    }else if (ultimo_digito == 9)
    {
        cout<< "su saldo se ha triplicado";
    }else if (ultimo_digito == 4)
    {
        cout<< "su saldo se ha quintuplicado";
    }
    return 0;
}