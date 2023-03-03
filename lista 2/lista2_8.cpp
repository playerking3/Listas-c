#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int decimal;
    cout << "Digite um n�mero decimal: ";
    cin >> decimal;

    vector<int> binario;

    while (decimal > 0) {
        binario.push_back(decimal % 2);
        decimal /= 2;
    }

    reverse(binario.begin(), binario.end());

    cout << "Valor em bin�rio: ";
    for (int i = 0; i < binario.size(); i++) {
        cout << binario[i];
    }
    cout << endl;

    return 0;
}

