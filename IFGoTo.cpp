#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	loop:
		//: no final indica uma label
		
	cout << "Qual pa�s vai ganhar a copa do mundo? \n";
	
	cin >> pais;
	
	if (pais == "Brasil"){
		
		cout << "Brasil vai ser campe�o do mundo!\n";
		
	} else if (pais == "BRASIL"){
		cout << "Brasil vai ser campe�o do mundo!\n";
	} else if (pais == "brasil"){
		cout << "Brasil vai ser campe�o do mundo!\n";
	} else if(pais == "ARGENTINA") {
		cout << "Argentina jamais vai ser campe� do mundo!\n";
		goto loop;
		
	}
	 else {
		
		cout << "Esse pa�s n�o pode ser campe�o do mundo, desculpe.\n Tente novamete com outro pa�s\n\n";
		
		goto loop;
		
	}
	
	system("Pause");
	return 0;
	
}
