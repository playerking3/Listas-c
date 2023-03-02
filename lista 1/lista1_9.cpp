#include <iostream>
#include <cmath>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int digitos, user, armstrong, ndigi = 0, expo = 1;
	int casa = 1;	
	
	cout<<"Insira um numero: ";
	cin>>user;
	
	while(user> expo){
		expo *= 10;
		ndigi ++;
	}
		
	while(armstrong < user){
		
		digitos = (user/casa)%10;
		
		armstrong += pow(digitos, ndigi);
				
		
		if(digitos == 0 && casa == 1410065408){
			break;
		}
		casa *= 10;
	}
	
	if(armstrong== user){
		cout<<"O numero "<<user<<" é um numero de armstrong";
	}else{
		cout<<"O numero "<<user<<" Não é um numero de armstrong";
	}
}

