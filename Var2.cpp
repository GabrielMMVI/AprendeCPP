#include <iostream>
#include <locale.h>
using namespace std;



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade;
	
	cout << "Digite seu nome: ";
	getline(cin, nome);
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	
	cout << "------------------------------ \n";
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	
	
	system("pause"); //Não deixa o cmd fechar
	
}
