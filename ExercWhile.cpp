#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	cout <<"Digite um número: ";
	cin >> num;
	
	while (num != 2 && num != 3 && num != 4){
		cout << "Número errado, digite outro: ";
		cin >> num;
	}
	
	system("pause");
	
	return 0;

}
