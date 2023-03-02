#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int user;
	do{
		cout<<"Insira um numero entre 1 e 5: ";
		cin>>user;
		
		switch(user){
			case 1: cout<<"A";
			break;
			case 2: cout<<"B";
			break;
			case 3: cout<<"C";
			break;
			case 4: cout<<"D";
			break;
			case 5: cout<<"F";
			break;
			default: cout<<"numero inválido, tente novamente";
			system("pause");
			system("cls");
		}	
	}while(user<0 or user>5);	
	
}
