#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2;
	string fruta;
	
	cout << "Digite o valor da vari�vel num1: ";
	cin >> num1;
	cout << "Digite o valor da vari�vel num2: ";
	cin >> num2;
	cout << "\n";
	
	cout << "+-+-+-+-+-+{If num1 > 5}+-+-+-+-+-+\n\n";
	
	if (num1 > 5){
		
		cout << "A vari�vel num1 � maior que 5!\n\n";
		}

		else {
			
		cout << "A vari�vel num1 � menor do que 5!\n\n";
		}
	
	
	cout << "+-+-+-+-+-+{If num2 < 5}+-+-+-+-+-+\n\n";
	if (num2 < 5){ 
		cout << "A vari�vel num2 � menor do que 5!\n\n";
	}
	else {
		cout << "A vari�vel num 2 � maior do que 5!\n\n";
	}
	
	
	cout << "+-+-+-+-+-+{If num1 > num2}+-+-+-+-+-+\n\n";
	if (num1 > num2){
		cout << "A var�avel num1 � maior do que num2\n\n";
	}
	else {
		cout << "A vari�vel num1 � menor do que num2\n\n";
	}


	cout << "Diga uma fruta: ";
	getline(cin, fruta);
	cout << "\n\n";
	
	
	if (fruta == "Banana"){
		cout << "Sua fruta � Banana\n";
	}
	else {
		cout << "Sua fruta n�o � banana\n\n Sua fruta �: " <<
		cout << fruta << "\n";
	}
	
		

	
	system("pause");
	return 0;
}
