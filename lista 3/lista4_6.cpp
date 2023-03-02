#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int user;
	do{
		cout<<"Insira o numero do seu turno: ";
		cin>>user;
		
		switch(user){
			case 1: cout<<"Manhã";
			break;
			case 2: cout<<"Tarde";
			break;
			case 3: cout<<"Noite";
			break;
			default: cout<<"numero inválido, tente novamente\n";
			system("pause");
			system("cls");
		}	
	}while(user<0 or user>3);	
	
}
