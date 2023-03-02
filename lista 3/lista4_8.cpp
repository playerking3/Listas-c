#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float temp, f, met;
	
	cout<< "Insira a temperatura: ";
	cin>> temp;
	
	cout<<"insira o sistema ultilizado:\n1-farenheit\n2-kelvin\n\n";
	cin>>met;
	
	if(met==1){
		f = temp*1.8+ 32;
		cout<<f<<"ºF";
	}else{
		cout<<temp-273<<"K";
	}
	
	
}
