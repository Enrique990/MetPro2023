#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int edades[10], contar=0;
    for(int i = 0; i<10; i++)
    {
        cout<<"ingresa una edad";
        cin>> edades[i];
    }
    
    for(int i = 0; i<10; i++)
    {
        if(edades[i]>=18) contar++;
    }
    cout <<"Hay " << contar << ", mayores de edad." << endl;
    return 0;
}