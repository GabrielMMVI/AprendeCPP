#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	loop:
		//: no final indica uma label
		
	cout << "Qual país vai ganhar a copa do mundo? \n";
	
	cin >> pais;
	
	if (pais == "Brasil"){
		
		cout << "Brasil vai ser campeão do mundo!\n";
		
	} else if (pais == "BRASIL"){
		cout << "Brasil vai ser campeão do mundo!\n";
	} else if (pais == "brasil"){
		cout << "Brasil vai ser campeão do mundo!\n";
	} else if(pais == "ARGENTINA") {
		cout << "Argentina jamais vai ser campeã do mundo!\n";
		goto loop;
		
	}
	 else {
		
		cout << "Esse país não pode ser campeão do mundo, desculpe.\n Tente novamete com outro país\n\n";
		
		goto loop;
		
	}
	
	system("Pause");
	return 0;
	
}
