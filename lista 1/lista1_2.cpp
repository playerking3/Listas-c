#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int mes;
	
	do{
		cout<<"Insira o numero do mês desejado: \nDigitte 0 para sair\n\n";
		cin>>mes;
		system("pause");
		system("cls");
		switch(mes){
			case 0: cout<<"Saindo do programa";
			break;
			case 1: cout<<"O mes "<<mes<<" é Janeiro.\n";
			break;
			case 2: cout<<"O mes "<<mes<<" é Fevereiro.\n";
			break;
			case 3: cout<<"O mes "<<mes<<" é Março.\n";
			break;
			case 4: cout<<"O mes "<<mes<<" é Abril.\n";
			break;
			case 5: cout<<"O mes "<<mes<<" é Maio.\n";
			break;
			case 6: cout<<"O mes "<<mes<<" é Junho.\n";
			break;
			case 7: cout<<"O mes "<<mes<<" é Julho.\n";
			break;
			case 8: cout<<"O mes "<<mes<<" é Agosto.\n";
			break;
			case 9: cout<<"O mes "<<mes<<" é Setembro.\n";
			break;
			case 10: cout<<"O mes "<<mes<<" é Outubro.\n";
			break;
			case 11: cout<<"O mes "<<mes<<" é Novembro.\n";
			break; 
			case 12: cout<<"O mes "<<mes<<" é Dezembro.\n";
			break;
			default: cout<<"Numero inválido, tente novamente\n";
			
		}
	
	}while(mes!=0);
}
