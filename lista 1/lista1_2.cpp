#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	do{
		cout<<"Insira o numero do m�s desejado: \nDigitte 0 para sair\n\n";
		cin>>mes;
		system("pause");
		system("cls");
		switch(mes){
			case 0: cout<<"Saindo do programa";
			break;
			case 1: cout<<"O mes "<<mes<<" � Janeiro.\n";
			break;
			case 2: cout<<"O mes "<<mes<<" � Fevereiro.\n";
			break;
			case 3: cout<<"O mes "<<mes<<" � Mar�o.\n";
			break;
			case 4: cout<<"O mes "<<mes<<" � Abril.\n";
			break;
			case 5: cout<<"O mes "<<mes<<" � Maio.\n";
			break;
			case 6: cout<<"O mes "<<mes<<" � Junho.\n";
			break;
			case 7: cout<<"O mes "<<mes<<" � Julho.\n";
			break;
			case 8: cout<<"O mes "<<mes<<" � Agosto.\n";
			break;
			case 9: cout<<"O mes "<<mes<<" � Setembro.\n";
			break;
			case 10: cout<<"O mes "<<mes<<" � Outubro.\n";
			break;
			case 11: cout<<"O mes "<<mes<<" � Novembro.\n";
			break; 
			case 12: cout<<"O mes "<<mes<<" � Dezembro.\n";
			break;
			default: cout<<"Numero inv�lido, tente novamente\n";
			
		}
	
	}while(mes!=0);
}
