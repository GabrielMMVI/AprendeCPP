#include <iostream>
#include <locale.h>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double vlr;
	double desc;
	char c;
	
	
	cout << "--- -+-+-+-+-+-+- Calculadora de descontos -+-+-+-+-+-+- ---\n";
	cout << "F - Funcionário | - 10% | \n";
	cout << "V - Cliente VIP | - 5% | \n";
	cout << " Cliente comum | Sem desconto | \n";
	cout << "Informe a classe do comprador: ";	
	cin >> c;
	
	switch (c){
		case 'F':
		case 'f':
			cout << "| Desconto exclusivo para funcionário |( - 10% )\n";
			
			cout << "Digite o valor do item que o desconto será aplicado.\n";
			cout << "Valor: ";
			desc = 0.10;
			cin >> vlr;
			cout << "Operação a ser realizada: \n";
			cout << vlr << " - " << "(" << vlr << " * " << desc << ")\n";
			
			vlr = vlr - (vlr * desc);
			
			cout << "O valor da peça é: " << vlr << endl;
			
			system("pause");
		
			return 0;
		break;
		
		case 'V':
		case 'v':
			cout << "| Desconto exclusivo para Cliente Vip |( - 5% )\n";
			
			cout << "Digite o valor do item que o desconto será aplicado.\n";
			cout << "Valor: ";
			desc = 0.05;
			cin >> vlr;
			cout << "Operação a ser realizada: \n";
			cout << vlr << " - " << "(" << vlr << " * " << desc << ")\n";
			
			vlr = vlr - (vlr * desc);
			
			cout << "O valor da peça é: " << vlr << endl;
			
			system("pause");
		
			return 0;
		break;
		
		default:
			cout << "| Sem desconto exclusivo | Cliente comum\n";
			
			cout << "Digite o valor do item que o desconto será aplicado.\n";
			cout << "Valor: ";
			cin >> vlr;
			
			cout << "O valor da peça é: " << vlr << endl;
			
			system("pause");
		
			return 0;
		break;	
		
			

	}
}
