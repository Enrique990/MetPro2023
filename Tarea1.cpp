#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, temp;
    cout << "dime un numero";
    cin >> a;
    cout << "dime oto numero";
    cin >> b;
    cout << "cambiando...";
    temp = a;
    a = b;
    b = temp;
    cout << "Nuevos valores"<<endl;
    cout << a << endl << b << endl;
    return 0;
}
