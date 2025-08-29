#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	num = 0;
	cout << "Valor inicial da variável: ";
	cout << num << "\n";
	//Aqui ela só foi iniciada como 0
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	//Soma +1 na variável
	num = num+1;
	
		
	return 0;
	system("pause");
}
