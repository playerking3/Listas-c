#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int numero, unidade, dezena, centena;
	
	do{
	
		cout<<"Insira um numero de 3 digitos: ";
		cin>>numero;
			
	}while(numero <= 99 or numero >999);
	
	unidade = numero % 10;
	dezena = (numero/10) %10;
	centena = (numero/100) %10;
	
	system("pause");
	system("cls");
	
	cout<<"A soma dos digitos do numero escolhido é: "<<unidade+dezena+centena;
	
}

	
