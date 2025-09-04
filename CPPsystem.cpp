#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");

	cout << "É possível usar recursos do sistema através do comando: \n";
	cout << "system(comando)\n";
	
	cout << "Basta usar o comando com o mesmo script que se usa no prompt de comando\n\n";
	
	cout << "Abrindo notepad\n";
	cout << "Executando 'system(\"notepad\");'\n\n\n";
	
	system ("cmd");

	system("notepad");
	system("Pause");
	return 0;
}
