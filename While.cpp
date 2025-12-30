#include <iostream>
#include <locale.h>
#include <limits>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, o; // -> Para as primeiras operações
	/*|||||||||||||||||||||||||||||||||||||||||*/
	int qtVz; //-> Exercício de média
	double nota, media, soma;
	
	i = 1;
	
	while(i < 11){
		// Enquanto i for menor que 11 a expressão se repete até virar 11
		cout << i << endl;
		
		i++;
			
	}
// ---------------------------------------------------------------------------------
	cout << endl << endl;
// ---------------------------------------------------------------------------------
	
	o = 10;
	
	while (o > 0){
		
		cout << o << endl;
		
		o--;
	}
// ---------------------------------------------------------------------------------
	cout << endl << endl;
// ---------------------------------------------------------------------------------

	soma = 0;
	qtVz = 1;
	
	while (qtVz <=4){
		
		cout << "Informe a nota " << qtVz << ": ";
		cin >> nota;
		
		soma+=nota;
		qtVz++;
	}
	cout << endl;
	
	media = soma/4;
	
	cout << "Média = " << media << endl;
	
	system("pause");
	
	return 0;
}
