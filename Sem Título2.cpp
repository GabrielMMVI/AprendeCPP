#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	if (num1 > num2 || num1 > num3){
		cout << num1 << "é o maior número e ";
		
		
	}
		
}
