#include <iostream>
using namespace std;


main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3, primeiro, segundo, terceiro ;
	
	cout<<"informe o primeiro numero: ";
	cin>>n1;
	cout<<"informe o segundo numero: ";
	cin>>n2;
	cout<<"informe o terceiro numero: ";
	cin>>n3;
	
	system("pause");
	system("cls");

	if(n1<n2 && n1<n3){
		primeiro = n1;
	}else if(n2<n1 && n2<n3){
		primeiro = n2;
	}else{
		primeiro = n3;
	}
	
	if(n1>n2 && n1>n3){
		terceiro = n1;
	}else if(n2>n1&&n2>n3){
		terceiro = n2;
	}else{
		terceiro = n3;
	}
	
	if(n1 != primeiro && n1!= terceiro){
		segundo = n1;
	}else if(n2 != primeiro && n2!= terceiro){
		segundo = n2;
	}else{
		segundo = n3;
	}
	cout<<primeiro<<", "<<segundo<<", "<<terceiro;
}
