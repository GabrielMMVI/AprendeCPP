#include <iostream>
#include <locale.h>
using namespace std;


// Vari�veis globais s�o mut�veis e definidas por todo o c�digo

double nota1, nota2, nota3, nota4; //->Globais
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	double media; //Vari�vel local, s� � acessada por essa fun��o
	
	cout << "Calcula nota do aluno\n";
	cout << "==========================\n";
	
	cout << "Insira a 1a nota do aluno: ";
	cin >> nota1;
	
	cout << "Insira a 2a nota do aluno: ";
	cin >> nota2;
	
	cout << "Insira a 3a nota do aluno: ";
	cin >> nota3;
	
	cout << "Insira a 4a nota do aluno: ";
	cin >> nota4;
	
	cout << "Calculando m�dia...\n";
	system("@echo off");
	system("Pause");
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	cout << "A m�dia desse aluno foi de: " << media <<"\n";
	
	system("pause");
	return 0;

}
