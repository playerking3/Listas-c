#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c;
    setlocale(LC_ALL, "portuguese");

    cout << "Digite um caractere: ";
    cin >> c;

    if (isupper(c)) {
        cout << "O caractere digitado é uma letra maiuscula" << endl;
    } else if (islower(c)) {
        cout << "O caractere digitado e uma letra minuscula" << endl;
    } else if (isdigit(c)) {
        cout << "O caractere digitado é um numero" << endl;
    } else {
        cout << "O caractere digitado é um caractere especial" << endl;
    }

}

