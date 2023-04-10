#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    string texto = "#SomosUCA";
    for (char c : texto) {
        bitset<8> bin(c);
        cout << bin.to_string();
    }
    cout << endl;
    return 0;
}