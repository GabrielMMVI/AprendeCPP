#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	num = 10;
	//Vari�vel iniciada
	cout << "Valor inicial: ";
	cout << num << "\n";
	
	cout << "\n\n";
	
	//Var *2
	cout << "Valor multiplicado por 2: ";
	num*=2;
	cout << num << "\n";
	
	cout << "\n\n";
	
	// Var /4
	cout << "Valor dividido por 4: ";
	num/=4;
	cout << num;
	
	cout << "\n\n";
	
	cout << "\n";
	cout << "-=-=-=-=-=-=-P�S FIXADO-=-=-=-=-=-=-\n\n";
	
	// P�S FIXADO
	num = 100; //-> Se eu iniciar novamente a vari�vel ele remove todas as opera��es anteriores
	
	cout << "Valor p�s-fixado: ";
	cout << num;
	
	cout << "\n\n";
	
	cout << "Incrementando na vari�vel: \n";
	cout << num++ << "\n"; // Aqui ele vai imprimir antes de acrescentar o valor, ou seja, depois de colocar na tela esse valor, ele vai acrescentar +1.
	cout << num++ << "\n"; // Num aqui inicialmente � 101, ap�s imprimir, 102.
	cout << num << "\n"; // Imprimiu 102
	cout << "\n";
	cout << "-=-=-=-=-=-=-PR� FIXADO-=-=-=-=-=-=-\n";
	cout << ++num << "\n"; // Quando coloca o ++ antes acontece o contr�rio, ele soma primeiro depois imprime, ou seja aqui ele vai imprimir 103
	
	
	
	return 0;
	system("pause");
}
