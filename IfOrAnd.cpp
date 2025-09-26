#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	string fruta;
	
	cout << "Digite: ";
	cin >> numero;
	
	
	// && e 
	if(numero >= 2 && numero <= 10)  {
		
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "Número digitado: " << numero << endl;
		cout << "O Número está no intervalo de 2 a 10\n\n";

		
	}else{
		
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "O número não está entre 2 e 10\n";
				
	} 
	
	numero = 0;
	cout << "Digite: ";
	cin >> numero;
	
	cout << endl;
	cout << endl;
	// || OU
	if (numero >= 10 || numero <= 5){
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "Número digitado: " << numero << endl;
		cout << "O número é maior do que 10 ou menor do que 5\n";
					
	}else{
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "O número não é maior que 10 nem menor que 5\n";
	}
	
	cout << endl;
	cout << endl;
	//fruta
		cout << "Digite fruta em minúsculo: ";
	cin >> fruta;
	
	if (fruta == "maca" || fruta == "banana"){
		cout << "-+-+-+-+-Fruta-+-+-+-+-\n";
		cout << "Fruta: " << fruta << endl;
		cout << "Essa fruta é maçã ou banana\n";
	system("pause");
	return 0;
	
	

	}
}

