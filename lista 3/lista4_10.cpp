#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	 do {
		
			cout << "Informe o digito da semana: ";
			cin >> n;
	
		switch(n){
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "final de semana\n";
			break;
			
			case 2: cout << "dia ultil\n";
			break;
			
			case 3: cout << "dia ultil\n";
			break;
			
			case 4: cout << "dia ultil\n";
			break;
			
			case 5: cout << "dia ultil\n";
			break;
			
			case 6: cout << "dia ultil\n";
			break;
			
			case 7: cout << "final de semana\n";
			break;
			
			
			default: cout <<"Informe um dia valido\n";
			break;
		}
	}while(n !=0);
}
