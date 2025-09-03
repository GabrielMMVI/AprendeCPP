#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double num1, num2, num3, x, y, z;
	
	
	cout << "=-=-=-=-=-=Calculando valores=-=-=-=-=-=\n\n\n";
	
	cout << "Digite o valor 1: ";
	cin >> num1;
	cout << "Digite o valor 2: ";
	cin >> num2;
	cout << "Digite o vaor 3: ";
	cin >> num3;
	
	cout << "\n\n"; // Pula 1 linha
	
	cout << "Armazenando variáveis...\n";
	cout << "Calculando resultados...\n\n"; // Pula 1 linha
	cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+\n"; 
	
	cout << "Cálculo 1: \n";
	cout << "(2 x " << num1 << ") + (2 % " << num2 << ")= \n";
	x = (num1*2) + (num2/2);
	cout << x << "\n";
	cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
	
	cout << "Cálculo 2: \n";
	cout << "3 x " << num1 << " + " << num3 << "= \n";
	y = (num1*3) + num3;
	cout << y << "\n";
	cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
	
	cout << "Cálculo 3: \n";
	cout << "2 x " << num3 << "= \n";
	z = num3*2;
	cout << z << "\n";
	cout << "+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
	
	
	

	
	
	return 0;
	system("pause");
}
