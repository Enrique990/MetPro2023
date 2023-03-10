#include<iostream>
#include<math.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int num, pot;
    cout<<" Dime un numero: ";
    cin>> num;
    cout <<" Dime la potencia: ";
    cin >> pot;
    cout << num << " elevado a " << pot;
    cout << " es "<< pow(num, pot);
    return 0;
}