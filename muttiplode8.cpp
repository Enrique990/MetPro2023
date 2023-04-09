#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cout << "Dime un numero:";
    cin >> x;
    y = 8;
    
    if(x % y == 0){
        cout << x << " es multiplo de " << y << endl;
    }else{
        cout << x << " no es multiplo de " << y << endl;
    }
    return 0;
}