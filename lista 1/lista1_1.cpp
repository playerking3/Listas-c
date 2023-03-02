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
		cout<<"Insira a operação desejada:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n0-Sair\n\n";
		cin>>op;
		
		switch(op){
			case 0: cout<<"Saindo do programa";
			break;
			case 1: cout<<"O resultado é: "<<adicao(n1, n2)<<endl;
			break;
			case 2: cout<<"O resultado é: "<<subtracao(n1, n2)<<endl;
			break;
			case 3: cout<<"O resultado é: "<<multiplicacao(n1, n2)<<endl;
			break;
			case 4: cout<<"O resultado é: "<<divisao(n1, n2)<<endl;
			break;
			default: cout<<"Comando invalido, tente novamente\n";
			system("pause");
			system("cls");
		}	
	}while(op<0 or op>4);
	
}
