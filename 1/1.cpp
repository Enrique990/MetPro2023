#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char letra, antecesor, sucesor;

    cout << "escriba una letra ";
    cin >> letra;

    antecesor = letra -1;
    sucesor = letra +1;

    cout << "La letra anterior es: "<<antecesor<<endl;
    cout << "La letra siguiente es: "<<sucesor<<endl;
    return 0;
}