#include <iostream>
#include <locale.h>
using namespace std;


int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
loop:	
	cin >> letra;
	cout << endl;
	
	if
	(
	letra == 'a' ||
	letra == 'A' ||
	letra == 'e' ||
	letra == 'E' ||
	letra == 'i' ||
	letra == 'I' ||
	letra == 'o' ||
	letra == 'O' ||
	letra == 'u' ||
	letra == 'U'
	)
	{
		cout << "A letra " << letra << " é uma vogal.\n";

	}
	
	else if
	(
	letra == '1' ||
	letra == '2' ||
	letra == '3' ||
	letra == '4' ||
	letra == '5' ||
	letra == '6' ||
	letra == '7' ||
	letra == '8' ||
	letra == '9' ||
	letra == '0' 	
	) {
		cout << "Você digitou um número. Tente novamente.\n";
goto loop;
	}
	 
	else { 
	cout << "A letra " << letra << " é uma consoante.\n";
	}
	
	system("break");
	return 0;
	
	
	
	
}
