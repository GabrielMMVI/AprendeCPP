#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	cout << "Iniciando a var 'num'\n";
	num = 10;
	cout << num;
	
	cout << "\n\n";
	
	//Invertendo a variável
	
	num = num*-1;
	cout << "Valor inverso da variável: \n";
	cout << num;
	
	cout << "\n\n";
	
	cout << "-=-=-=-PRÉ FIXADO-=-=-=-\n\n";
	num = 20;
	cout << "Valor inicial da variável: \n";
	cout << num << "\n";
	cout << "Valor inverso da variável usando prefixação (-num): \n";
	cout << -num << "\n\n";
	
	cout << "-=-=-=-SUBSTITUIDO-=-=-=-\n\n";
	num = 30;
	cout << "Valor inicial da variável: \n";
	cout << num << "\n";
	cout << "Valor inverso da variável usando substituição (num=-num): \n";
	num=-num;
	cout << num << "\n";
	
	
	return 0;
	system("pause");
}
