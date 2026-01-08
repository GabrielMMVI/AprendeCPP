#include <iostream>
#include <locale.h>
#include <limits>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
//Variáveis
	int numInt = 0; //Número recebido
	int i = 0; int o= 0; int p = 0; int q = 0; int z = 0; //Operadores

	while(true){
		cout << z << " | numInt: ";
		cin >> numInt;
		z++;
		
		if(numInt > 40){
			cout << "numInt > 40!\nAbortando operação!\n\n";
			break;
			system("pause");
			return 0;
			}	
		
		else if (0  <= numInt && numInt <= 10){i++;}
		else if (11 <= numInt && numInt <= 20){o++;}
		else if (21 <= numInt && numInt <= 30){p++;}
		else if (31 <= numInt && numInt <= 40){q++;}
		
		else if (numInt < 0){
			
			cout << "i: " << i << endl;
			cout << "o: " << o << endl;
			cout << "p: " << p << endl;
			cout << "q: " << q << endl;
			
			break;
			system("pause");
			return 0;
		}
	}
}	
	
