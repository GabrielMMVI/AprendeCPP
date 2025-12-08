#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Criar um algoritmo que puxe 3 números
	e depois imprima na ordem decrescente*/
	
	//Declarei variáveis
	int num1,num2,num3;
	
	//Requisitando números
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	cout << "====================================\n";
	cout << "IMPRIMINDO NÚMEROS...\n";
	cout << "====================================\n";
	
	//Imprimindo números
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << endl << endl;
	
	cout << "Imprimindo em ordem decrescente: \n";
	
	//Ordem decrescente ifs
	if ( num1 > num2 && num2 > num3 ){
		
		cout << num1 << "\n" << num2 << "\n" << num3 << "\n";
		
	}else if( num1 > num3 && num3 > num2 ){
		
		cout << num1 << "\n" << num3 << "\n" << num2 << "\n";
		
	}else if( num2 > num1 && num1 > num3 ){
		
		cout << num2 << "\n" << num1 << "\n" << num3 << "\n";		
		
	}else if( num2 > num3 && num3 > num1 ){
		
		cout << num2 << "\n" << num3 << "\n" << num1 << "\n";		
		
	}else if( num3 > num1 && num1 > num2 ){
		
		cout << num3 << "\n" << num1 << "\n" << num2 << "\n";
		
		
	}else{
		
		cout << num3 << "\n" << num2 << "\n" << num1 << "\n";
		
	}
	
	system ("pause");
	return 0;
}
