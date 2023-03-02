#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	string nome;
	
	cout<<"Insira seu nome\n";
	cin>> nome;
	
	cout<<"Insira sua idade\n";
	cin>> idade;
	
	system("pause");
	system("cls");
	
	if(idade<18){
		cout<<nome<<", Você é menor de idade";
	}else if(idade>18 && idade <65){
		cout<<nome<<", Você é adulto(a)";
	}else{
		cout<<nome<<", Você é idoso(a)";
	}
}
