//Elebar un numero multiplo de 4 al cubo

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x, y;
    cout << "Dime un numero multiplo de 4 para elebarlo al cubo: ";
    cin >> x;
    y = 4;
    if(x % y == 0){ y = y * y * y; 
        cout <<"El cubo de el numero es: " << y << endl;
    }else{
        cout << x << " no es multiplo de 4" << endl;
    }
    getch();
    return 0;
}