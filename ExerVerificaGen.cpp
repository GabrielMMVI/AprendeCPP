#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	char gen;
	
	cin >> gen;
/*	
	(gen == 'F' || gen == 'f')?
	cout << "G�nero feminino\n";
	:
	(gen == 'M' || gen == 'm')?
	cout << "G�nero masculino\n";
	:
	(gen != 'f' && gen != 'F' && gen !='m' && gen !='M')?
	cout << "G�nero inv�lido\n";
*/	

	if(gen == 'F' || gen == 'f')
	{
		cout << "G�nero feminino\n";	
	}
	else if(gen == 'M' || gen == 'm')
	{
		cout << "G�nero masculino\n";
	}
	else
	{
		cout << "G�nero n�o definido.\n";
	}
	
	system("break");
	return 0;
	
	
	
}
