#include <iostream>
#include <cmath>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int digitos, user, armstrong, ndigi;
	int casa = 1;	
	
	cout<<"Insira um numero: ";
	cin>>user;
	
	//gambiarra
	if(user>=0 && user < 10){
		ndigi = 1;
	}else if(user>=10 && user < 100){
		ndigi = 2;
	}else if(user>=100 && user < 1000){
		ndigi = 3;
	}else if(user>=1000 && user < 10000){
		ndigi = 4;
	}else if(user>=10000 && user < 100000){
		ndigi = 5;
	}else if(user>=100000 && user < 1000000){
		ndigi = 6;
	}
	//gmabiarra
	
	while(armstrong < user){
		
		digitos = (user/casa)%10;
		
		armstrong += pow(digitos, ndigi);
				
		
		if(digitos == 0 && casa == 1410065408){
			break;
		}
		casa *= 10;
		
		cout<<armstrong<<endl;
		cout<<digitos<<endl;
		cout<<casa<<endl;
	}
	
	if(armstrong== user){
		cout<<"O numero "<<user<<" é um numero de armstrong";
	}else{
		cout<<"O numero "<<user<<" Não é um numero de armstrong";
	}
}

