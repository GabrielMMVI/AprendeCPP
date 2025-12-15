#include <iostream>
#include <locale.h>
using  namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numApto;
	
	cout << "Digite o número do apartamento desejado: ";
	cin >> numApto;
	
	switch(numApto){
		
		case 1:
		case 2:
		case 3:
			cout << "==Andares 1 ao 3==\n";
			cout << "Valor: R$ 200.000,00\n\n";
			break;
		case 4:
		case 5:
		case 6:
			cout << "==Andares 4 ao 6==\n";
			cout << "Valor: R$ 250.000,00\n\n";
			break;
		case 7:
		case 8:
		case 9:
			cout << "==Andares 7 ao 9==\n";
			cout << "Valor: R$ 300.000,00\n\n";
			break;
		case 10:
		case 11:
		case 12:
			cout << "==Andares 10 ao 12==\n";
			cout << "Valor: R$ 400.000,00\n\n";
			break;
		case 13:
			cout << "==Andar 13==\n";
			cout << "Valor: R$500.000,00\n\n";
			break;
		case 14:
			cout << "==Cobertura Premium (0/3 Aptos)==/n";
			cout << "Valor: R$750.000,00\n\n";
			break;
		default:
			cout << "Digite apenas um valor de 1 a 14.\n";
			break;
		
		return 0;
		}
}
