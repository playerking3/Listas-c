#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int idade, cigarros;
	float dias;
	
	cout<<"A quantos anos voc� fuma: ";
	cin>>idade;
	cout<<"Quantos cigarros voc� fuma por dia: ";
	cin>>cigarros;
	
	dias = (idade * cigarros * 3650)/1440;
	
	system("pause");
	system("cls");
	
	cout<<"Voc� perdeu "<<dias<<" Dias de vida fumando";
}
