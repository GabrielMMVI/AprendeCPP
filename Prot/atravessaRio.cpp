#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese"); 
	cout << "Dilema do rio\n";
	cout << "Você é um pastor e precisa passar\nUm leão\nUma ovelha\ne um monte de Capim\n para o outro lado do rio.\n";
	cout << "Mas no seu barco só cabe você e mais uma dessas cargas.\n";
	cout << "E você não pode levar qualquer um.\n";
	cout << "Se deixar o leão e a ovelha sozinhos, o leão come a ovelha\n Se deixar a ovelha e o capim sozinhos a ovelha come o Capim.\n E se você ficar sozinho com o leão ele também te come.\n";
	cout << "Atravesse todos para o outro lado do rio sem que nenhum seja comido.\n";
	cout << "O barco também não pode ir sozinho, precisa de pelo menos um para remar o barco. (Sim o leão e a ovelha sabem andar de barco).\n";
	cout << "Quem vai passar primeiro?";
	
}
