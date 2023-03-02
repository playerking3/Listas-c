#include <iostream>
using namespace std;


main(){
	setlocale (LC_ALL, "portuguese");
	int mes;
	

	do{
		cout<<"Infome o digito do mês: ";
		cin>>mes;
		switch(mes){
			case 0: cout<<"saindo do programa\n";
			break;
			case 1: cout<<"Janeiro\n";
			break;
			case 2: cout<<"fevereiro\n";
			break;
			case 3: cout<<"março\n";
			break;
			case 4: cout<<"abril\n";
			break;
			case 5: cout<<"maio\n";
			break;
			case 6: cout<<"junho\n";
			break;
			case 7: cout<<"julho\n";
			break;
			case 8: cout<<"agosto\n";
			break;
			case 9: cout<<"setembro\n";
			break;
			case 10: cout<<"outubro\n";
			break;
			case 11: cout<<"novembro\n";
			break;
			case 12: cout<<"dezembro\n";
			break;
			default: cout<<"informe um mês válido\n";
		}
	}while(mes != 0);
}
