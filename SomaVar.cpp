#include <iostream>
#include<locale.h>
using namespace std;


int main () {
	setlocale(LC_ALL, "portuguese");
	
	int num1;
	int num2;
	int num3;
	int soma;
	
	cout << "Digite o 1 n�mero: ";
	cin >> num1;
	
	cout << "Digite o 2 n�mero: ";
	cin >> num2;
	
	cout << "Digite o 3 n�mero: ";
	cin >> num3;
		
	
	soma = num1 + num2 +num3;
	
	cout << soma << "\n";
	
	
	
	
	system("pause");
	return 0;
	
}
