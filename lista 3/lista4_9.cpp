#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL,"Portuguese");
	int numero,qtd;	
	
	cout << "informe o numero para tabuada";
	cin >> numero;
	

	for (int x = 0; x <= 10; x++){
		cout << numero << "x" << x << "=" << numero * x << endl;
	}
}	
