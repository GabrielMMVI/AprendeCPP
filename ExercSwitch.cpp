#include <iostream>
#include <locale.h>
#include <limits>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2;
	double resul;
	char c;
	
	cout << "=+=+= FAZEDOR DE OPERAÇÕES =+=+=\n";
	cout << "==================================\n";
	cout << "Selecione uma operação para ser fazida: \n\n";
	cout << "+ | Soma\n" << "- | Subtração\n" << "* | Multiplicação\n" << "/ | Divisão\n";
	cout << endl << endl;
	
	cout << "Insira operação: ";
	cin >> c;
	
	switch (c){
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		case '+' :
			cout << " + | Operação selecionada: SOMA\n\n";
			
			cout << "Insira a equação para somar:\n";
			
			cin >> n1;
			cout << n1 << " + ";
			cin >> n2;
			
			resul = n1 + n2;
			
			cout << n1 << " + " << n2 << " = " << resul;
		break;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//-------------------------------------------------------------		
		case '-' :
			cout << " - | Operação selecionada: SUBTRAÇÃO\n\n";
			
			cout << "Insira a equação para subtrair:\n";
			
			cin >> n1;
			cout << n1 << " - ";
			cin >> n2;
			
			resul = n1 - n2;
			
			cout << n1 << " - " << n2 << " = " << resul;
		break;
//-------------------------------------------------------------

//*************************************************************		
		case '*' :
			cout << " * | Operação selecionada: MULTIPLICAÇÃO\n\n";
			
			cout << "Insira a equação para multiplicar:\n";
			
			cin >> n1;
			cout << n1 << " * ";
			cin >> n2;
			
			resul = n1 * n2;
			
			cout << n1 << " * " << n2 << " = " << resul;
		break;
//*************************************************************

// ////////////////////////////////////////////////////////////
		case '/' :
			cout << " / | Operação selecionada: DIVISÃO\n\n";
			
			cout << "Insira a equação para dividir:\n";
			
			cin >> n1;
			cout << n1 << " / ";
			cin >> n2;
			
			resul = n1 / n2;
			
			cout << n1 << " / " << n2 << " = " << fixed << setprecision(2) <<resul << endl;
		break;						
// ////////////////////////////////////////////////////////////	

		default:
			cout << "Isso não é uma operação válida!\n";
			cout << "Feche a aplicação e tente novamente.\n";
		
		}
system("pause");
return 0;
	
	
	
}
