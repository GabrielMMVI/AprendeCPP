#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double cm;
	double m;
	
	cout << "Conversor de metros para centímetros.\n";
	cout << "Digite um valor para ser convertido de metro para centímetro: ";
	cin >> m;
	
	cm = m*100;
	
	cout << m << " Metros são " << cm << " Centímetros \n"; 
	
	
	
	system("pause");
	
	return 0; 
}
