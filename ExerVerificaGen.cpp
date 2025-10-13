#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	char gen;
	
	cin >> gen;
/*	
	(gen == 'F' || gen == 'f')?
	cout << "Gênero feminino\n";
	:
	(gen == 'M' || gen == 'm')?
	cout << "Gênero masculino\n";
	:
	(gen != 'f' && gen != 'F' && gen !='m' && gen !='M')?
	cout << "Gênero inválido\n";
*/	

	if(gen == 'F' || gen == 'f')
	{
		cout << "Gênero feminino\n";	
	}
	else if(gen == 'M' || gen == 'm')
	{
		cout << "Gênero masculino\n";
	}
	else
	{
		cout << "Gênero não definido.\n";
	}
	
	system("break");
	return 0;
	
	
	
}
