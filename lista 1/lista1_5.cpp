#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	float result;

	cout<<"Insira o primeiro numero: ";
	cin>>n1;
	cout<<"Insira o segundo numero: ";
	cin>>n2;
	cout<<"Insira o terceiro numero: ";
	cin>>n3;
	
	system("pause");
	system("cls");
	
	result = (n1+n2+n3)/3;
		
	if(result >= 7){
		cout<<"Aprovado com a média "<<result;
	}else if(result >= 5 && result < 7){
		cout<<"em recuperação com a média "<<result;
	}else{
		cout<<"Reprovado com a média "<<result;
	}
}


