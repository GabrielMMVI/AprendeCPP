#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double cm;
	double m;
	
	cout << "Conversor de metros para cent�metros.\n";
	cout << "Digite um valor para ser convertido de metro para cent�metro: ";
	cin >> m;
	
	cm = m*100;
	
	cout << m << " Metros s�o " << cm << " Cent�metros \n"; 
	
	
	
	system("pause");
	
	return 0; 
}
