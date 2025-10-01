#include <iostream>
using namespace std;

int main(){
	
	double num;
	string quest, adv;
	quest = "12451631";
	
	num = 2;
	
	cout << "Vamos jogar um jogo?\n";
	cout << "Estou pensando em um número... Adivinhe...\n" << endl;

loop:	
	cout << "Adinvinhar: ";
	//cin >> adv;
	adv = "2";
	cout << adv << endl;
	
	if (quest == adv){
		cout << "Parabéns, você acertou... Até mais!\n";
		return 0;
	} else {
		num = num * 2;
		cout << num << endl;
		goto loop;
	}
}
