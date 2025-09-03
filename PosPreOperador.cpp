#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	num = 10;
	//Variável iniciada
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
	cout << "-=-=-=-=-=-=-PÓS FIXADO-=-=-=-=-=-=-\n\n";
	
	// PÓS FIXADO
	num = 100; //-> Se eu iniciar novamente a variável ele remove todas as operações anteriores
	
	cout << "Valor pós-fixado: ";
	cout << num;
	
	cout << "\n\n";
	
	cout << "Incrementando na variável: \n";
	cout << num++ << "\n"; // Aqui ele vai imprimir antes de acrescentar o valor, ou seja, depois de colocar na tela esse valor, ele vai acrescentar +1.
	cout << num++ << "\n"; // Num aqui inicialmente é 101, após imprimir, 102.
	cout << num << "\n"; // Imprimiu 102
	cout << "\n";
	cout << "-=-=-=-=-=-=-PRÉ FIXADO-=-=-=-=-=-=-\n";
	cout << ++num << "\n"; // Quando coloca o ++ antes acontece o contrário, ele soma primeiro depois imprime, ou seja aqui ele vai imprimir 103
	
	
	
	return 0;
	system("pause");
}
