#include <iostream>
#include <locale.h>
using namespace std;



int main (){ 
setlocale (LC_ALL,"Portuguese");

string letra, mensagem;

cout << "Digite uma letra: ";
cin >> letra;
cout << endl;


(letra == "a") ? mensagem = "Letra A digitada\n" : mensagem = "Você não digitou a letra A\n";

cout << "-+-+-+-+-+-+-+-+-+-+-+-\n";
cout << "Letra digitada: " << letra << endl;
cout << "Resultado: " << mensagem << endl;

// -=-=-=-=-=-=-=-=-=-=-=-=-=-

string vogal, resultado;

cout << "Digite uma letra: ";
cin >> vogal;

(vogal == "a") ? resultado = "Vogal A\n" :
(vogal == "e") ? resultado = "Vogal E\n" :
(vogal == "i") ? resultado = "Vogal I\n" :
(vogal == "o") ? resultado = "Vogal O\n" :
(vogal == "u") ? resultado = "Vogal U\n" :
resultado = "Essa letra é uma consoante.\n";

cout << "-+-+-+-+-+-+-+-+-+-+-+-\n";
cout << "Letra digitada: " << vogal << endl;
cout << "Resultado: " << resultado << endl;


// -=-=-=-=-=-=-=-=-=-=-=-=-

string genero;
double preco;

cout << "Informe o preço: ";
cin >> preco;
cout << endl;

cout << "Informe seu genero: ";
cin >> genero;
cout << endl;

(genero == "M") ? preco++ : (preco = preco/2);

cout << "Preço: " << preco << endl;



system("pause");
return 0;

}
