#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	//Operador %
	int num, resto;
	
	num = 10;
	resto = num % 3;
	cout << "% serve para emitir o resto de uma divisão: \n\n";
	
	cout << "fiz 10%3, logo o resto será 1: \n";
	cout << resto << "\n";
	

	system("Pause");
	return 0;
}
