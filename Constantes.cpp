#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;


#define pi 3.14159 //Define uma vari�vel que n�o muda, ou seja, uma constante.
#define fala cout << "Hello, World!\n";

#define bigband cout << "Back on the beat!\n";

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double r;
	double diametro;
	double area;
	double comp;
	
	

	cout << "Digite o raio do c�rculo: ";
	cin >> r;
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando o di�metro de um c�rculo...\n";
	cout << "=========================================\n";
	
	
	diametro = r*2;
	
	
	cout << "=========================================\n";
	cout << "O di�metro do c�rculo �: " << diametro << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando a �rea do c�rculo...\n";
	cout << "=========================================\n";
	
	area = pi*pow(r, 2);
	
	
	cout << "=========================================\n";
	cout << "A �rea do c�rculo �: " << area << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando o comprimento do c�rculo...\n";
	cout << "=========================================\n";
	
	comp = 2*pi*r;


	cout << "O comprimento do c�rculo �: " << comp << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	system("pause");
	
	return 0;
}
