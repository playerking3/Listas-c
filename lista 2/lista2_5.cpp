#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int num, i;
    long long fatorial = 1;

    cout << "Digite um n�mero inteiro positivo: ";
    cin >> num;

    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " �: " << fatorial << endl;

    return 0;
}

