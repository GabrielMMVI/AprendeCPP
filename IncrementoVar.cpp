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
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	
	//Soma +1 na variável
	num = num+1;
	//Foi somado 1 na variável
	cout << "Valor somado com 1 da variável: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	
	
	//acrescenta o próximo número na variável, soma 1 também
	num++;
	cout << "Variável acrescentada com num++: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	//Reduz 1 número na variável
	num--;
	//Variável num foi decrementada em 1
	cout << "Variável decrementada para o número anterior: ";
	cout << num << "\n" ;
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	
	//Também soma 1
	num+=1;
	cout << "num+=1: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	//também Retira 1
	num-=1;
	cout << "num-=: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	
	
	
	
	
		
	return 0;
	system("pause");
}
