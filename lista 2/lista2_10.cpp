#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    for(int i = 1; i < 100; i++) {
        if(i % numero == 0) {
            cout << i << " � m�ltiplo de " << numero << endl;
        }
    }

    return 0;
}

