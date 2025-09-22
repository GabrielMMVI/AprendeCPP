#include <iostream>

#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	string genero, nome;
	double valor;

	valor = 12;
	system(":Loop");
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "Digite seu gênero: ";
	cin >> genero;
	
	
	if(genero == "Masculino"){	
	
	cout << "-- -- --Comprovante de entrada-- -- --\n";
	cout << "Nome: " << nome << "\n";
	cout << "Valor da entrada: " << valor << "\n";
		
		
	} else if(genero == "Feminino"){
		
	cout << "-- -- --Comprovante de entrada-- -- --\n";
	cout << "Nome: " << nome << "\n";
	cout << "Valor da entrada: " << valor/2 << "\n";
		
	} else{
	cout << "Confira novamente seus dados de entrada e tente novamente.\n"	;
	system("goto :Loop");
		
	}
	
	system("Pause");
	return 0;
	
	
	
	
}
