#include <iostream>
using namespace std;

int adicao(int a, int b){
	return a+b;
}
int subtracao(int a, int b){
	return a-b;
}
int multiplicacao(int a, int b){
	return a*b;
}
int divisao(int a, int b){
	return a/b;
}
main(){
	int n1, n2, op;
	setlocale(LC_ALL, "portuguese");
	cout<<"Escreva o primeiro numero: ";
	cin>> n1;
	
	cout<<"Escreva o segundo numero: ";
	cin>> n2;
	
	system("pause");
	system("cls");
	
	do{
		cout<<"Insira a opera��o desejada:\n1-Adi��o\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n0-Sair\n\n";
		cin>>op;
		
		switch(op){
			case 0: cout<<"Saindo do programa";
			break;
			case 1: cout<<"O resultado �: "<<adicao(n1, n2)<<endl;
			break;
			case 2: cout<<"O resultado �: "<<subtracao(n1, n2)<<endl;
			break;
			case 3: cout<<"O resultado �: "<<multiplicacao(n1, n2)<<endl;
			break;
			case 4: cout<<"O resultado �: "<<divisao(n1, n2)<<endl;
			break;
			default: cout<<"Comando invalido, tente novamente\n";
			system("pause");
			system("cls");
		}	
	}while(op<0 or op>4);
	
}
