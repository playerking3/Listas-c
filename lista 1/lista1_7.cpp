#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float salario, aumento, dif;
	
	cout<<"Insira seu salário R$";
	cin>>salario;
	
	if(salario<=1500){
		aumento = salario * 1.10;
	}else{
		aumento = salario *1.05;
	}
	dif = aumento-salario;
	
	system("pause");
	system("cls");
	
	cout<<"O seu novo saário é de R$"<<aumento<<" e teve um aumento de R$"<<dif;
}
