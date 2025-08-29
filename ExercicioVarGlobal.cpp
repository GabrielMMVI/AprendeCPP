#include <iostream>
#include <locale.h>
using namespace std;

double nota1, nota2, nota3, nota4;
double media;

int main (){ 
setlocale(LC_ALL,"Portuguese");

cout << "Calculando a média de 4 alunos: \n";
cout << "================================\n";

cout << "\n";
cout << "\n";

cout << "Digite a 1a nota: ";
cin >> nota1;

cout<< "Digite a 2a nota: ";
cin >> nota2;

cout << "Digite a 3a nota: ";
cin >> nota3;

cout << "Digite a 4a nota: ";
cin >> nota4;

cout << "\n";


media = (nota1+nota2+nota3+nota4)/4;

cout << "A média desse aluno é de: " << media << "\n";

return 0;
system("pause");

}
