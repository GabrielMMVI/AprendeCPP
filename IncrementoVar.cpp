#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	num = 0;
	cout << "Valor inicial da vari�vel: ";
	cout << num << "\n";
	//Aqui ela s� foi iniciada como 0
	cout << "=-=-=-=-=-=-=-=-=-=-=\n\n";
	
	//Soma +1 na vari�vel
	num = num+1;
	
		
	return 0;
	system("pause");
}
