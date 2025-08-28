#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;


#define pi 3.14159 //Define uma variável que não muda, ou seja, uma constante.
#define fala cout << "Hello, World!\n";

#define bigband cout << "Back on the beat!\n";

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double r;
	double diametro;
	double area;
	double comp;
	
	

	cout << "Digite o raio do círculo: ";
	cin >> r;
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando o diâmetro de um círculo...\n";
	cout << "=========================================\n";
	
	
	diametro = r*2;
	
	
	cout << "=========================================\n";
	cout << "O diâmetro do círculo é: " << diametro << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando a área do círculo...\n";
	cout << "=========================================\n";
	
	area = pi*pow(r, 2);
	
	
	cout << "=========================================\n";
	cout << "A área do círculo é: " << area << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	cout << "=========================================\n";
	cout << "Calculando o comprimento do círculo...\n";
	cout << "=========================================\n";
	
	comp = 2*pi*r;


	cout << "O comprimento do círculo é: " << comp << "\n";
	cout << "=========================================\n";
	cout << "\n";
	cout << "\n";
	
	system("pause");
	
	return 0;
}
