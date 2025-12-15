#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numPais;
	
	cout << "-- Digite qual time vai ganhar a copa do mundo --\n";
	
	cout << "1 - Brasil\n";
	cout << "2 - Alemanha\n";
	cout << "3 - Argentina\n";
	cout << "4 - México\n";
	cout << "5 - Japão\n";
	cout << "6 - Costa Rica\n";
	cout << "7 - Estados Unidos\n";
	cout << "8 - Haiti\n";
	
	cin >> numPais;
	
	switch(numPais){
		case 1:
			cout << "Brasil será profetizado a ganhar a copa de 2026!!\n";
			break;
		case 2:
			cout << "Alemanha será profetizada a ganhar a copa de 2026!!\n";
			break;
		case 3:
			cout << "Argentina será profetizada a ganhar a copa de 2026!!\n";
			break;
		case 4:
			cout << "México será profetizado a ganhar a copa de 2026!!\n";
			break;
		case 5:
			cout << "Japão será profetizado a ganhar a copa de 2026!!\n";
			break;
		case 6:
			cout << "Costa Rica será profetizada a ganhar a copa de 2026!!\n";
			break;
		case 7:
			cout << "Estados Unidos será profetizado a ganhar a copa de 2026!!\n";
			break;
		case 8:
			cout << "Haiti será profetizado a ganhar a copa de 2026!!\n";
			break;
		default:
			cout << "Escolha um dos países listados acima apenas.\n";
			break;
		
	}
	
	
}

