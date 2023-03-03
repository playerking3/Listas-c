#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int num, i, fator;

    cout << "Digite um n�mero inteiro positivo: ";
    cin >> num;

    cout << "Fatores primos de " << num << " s�o: ";

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            fator = i;

            while (num % fator == 0) {
                cout << fator << " ";
                num /= fator;
            }
        }
    }

    cout << endl;

    return 0;
}

