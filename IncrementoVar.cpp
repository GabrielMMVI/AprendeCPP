#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	num = 0;
	cout << "Valor inicial da vari�vel: ";
	cout << num << "\n";
	//Aqui ela s� foi iniciada como 0
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	
	//Soma +1 na vari�vel
	num = num+1;
	//Foi somado 1 na vari�vel
	cout << "Valor somado com 1 da vari�vel: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	
	
	//acrescenta o pr�ximo n�mero na vari�vel, soma 1 tamb�m
	num++;
	cout << "Vari�vel acrescentada com num++: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	//Reduz 1 n�mero na vari�vel
	num--;
	//Vari�vel num foi decrementada em 1
	cout << "Vari�vel decrementada para o n�mero anterior: ";
	cout << num << "\n" ;
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	
	//Tamb�m soma 1
	num+=1;
	cout << "num+=1: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	//tamb�m Retira 1
	num-=1;
	cout << "num-=: ";
	cout << num << "\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	
	
	
	
	
		
	return 0;
	system("pause");
}
