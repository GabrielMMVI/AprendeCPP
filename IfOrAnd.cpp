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
		cout << "N�mero digitado: " << numero << endl;
		cout << "O N�mero est� no intervalo de 2 a 10\n\n";

		
	}else{
		
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "O n�mero n�o est� entre 2 e 10\n";
				
	} 
	
	numero = 0;
	cout << "Digite: ";
	cin >> numero;
	
	cout << endl;
	cout << endl;
	// || OU
	if (numero >= 10 || numero <= 5){
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "N�mero digitado: " << numero << endl;
		cout << "O n�mero � maior do que 10 ou menor do que 5\n";
					
	}else{
		cout << "-=-=-=-=-=-=-=-=-\n";
		cout << "O n�mero n�o � maior que 10 nem menor que 5\n";
	}
	
	cout << endl;
	cout << endl;
	//fruta
		cout << "Digite fruta em min�sculo: ";
	cin >> fruta;
	
	if (fruta == "maca" || fruta == "banana"){
		cout << "-+-+-+-+-Fruta-+-+-+-+-\n";
		cout << "Fruta: " << fruta << endl;
		cout << "Essa fruta � ma�� ou banana\n";
	system("pause");
	return 0;
	
	

	}
}

