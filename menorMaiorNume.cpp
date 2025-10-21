#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	if (num1 > num2 && num1 > num3){
		cout << num1 << " é o maior número\n";	
	}
	else if (num2 > num1 && num2 > num3){
		cout << num2 << " é o maior número\n";
	}
	else if (num3 > num1 && num3 > num2){
		cout << num3 << " é o maior número\n";
	}
	else{cout << "";}
	
	cout << " e \n";
	
	if (num1 < num2 && num1 < num3){
		cout << num1 << " é o menor número\n";
	}
	else if(num2 < num1 && num2 < num3){
		cout << num2 << " é o menor número\n";
	}
	else if(num3 < num1 && num3 < num2){
		cout << num3 << " é o menor número\n";
	}
	else{cout << "";}
	
		
}
