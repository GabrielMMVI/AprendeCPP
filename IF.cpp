#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2;
	string fruta;
	
	cout << "Digite o valor da variável num1: ";
	cin >> num1;
	cout << "Digite o valor da variável num2: ";
	cin >> num2;
	cout << "\n";
	
	cout << "+-+-+-+-+-+{If num1 > 5}+-+-+-+-+-+\n\n";
	
	if (num1 > 5){
		
		cout << "A variável num1 é maior que 5!\n\n";
		}

		else {
			
		cout << "A variável num1 é menor do que 5!\n\n";
		}
	
	
	cout << "+-+-+-+-+-+{If num2 < 5}+-+-+-+-+-+\n\n";
	if (num2 < 5){ 
		cout << "A variável num2 é menor do que 5!\n\n";
	}
	else {
		cout << "A variável num 2 é maior do que 5!\n\n";
	}
	
	
	cout << "+-+-+-+-+-+{If num1 > num2}+-+-+-+-+-+\n\n";
	if (num1 > num2){
		cout << "A varíavel num1 é maior do que num2\n\n";
	}
	else {
		cout << "A variável num1 é menor do que num2\n\n";
	}

	
		

	
	system("pause");
	return 0;
}
