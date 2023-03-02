#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int sem;
	do{
		cout<<"insira o numero do dia da semana: ";
		cin>>sem;
		
		switch(sem){
			case 1: cout<<"Domingo";
			break;
			case 2: cout<<"segunda-feira";
			break;
			case 3: cout<<"Terça-feira";
			break;
			case 4: cout<<"Quarta-feira";
			break;
			case 5: cout<<"Quinta-feira";
			break;
			case 6: cout<<"Sexta-feira";
			break;
			case 7: cout<<"sábado";
			break;
			default: cout<<"numero inválido, tente novamente";
			system("pause");
			system("cls");
		}
	}while(sem<1 or sem > 7);
}
