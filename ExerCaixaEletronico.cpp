#include <iostream>
#include <locale.h>
#include <iomanip>
#include <limits>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double money;
	int i2,i5,i10,i20,i50,i100,i200,iR;
	
	cout << "Calculador de troco para cédulas.\n";
	cout << "==================================\n";
	cout << "Insira um valor entre 2 e 2000 reais: ";
	cin >> money;
	
	//Validação da quantidade
	if(money > 2000 || money < 2){
		cout << "Valor inválido.\nInsira um valor entre 2 e 2000 reais apenas.\nEncerrando operação.";
		system("pause");
		return 0;
		
	}else{
	/*	cout << "Valor digitado: " << fixed << setprecision(2)<< money << endl << endl;
		i200 = money/200;
		i100 = money/100;
		i50 = money/50;
		i20 = money/20;
		i10 = money/10;
		i5 = money/5;
		i2 = money/2;
		
		cout << i200 << endl;
		cout << i100 << endl;
		cout << i50 << endl;
		cout << i20 << endl;
		cout << i10 << endl;
		cout << i5 << endl;
		cout << i2 << endl;*/
		
		i200 = money/200;
		cout << "Notas de 200: " << i200 << endl;
	
		money -= i200 * 200;
		cout << "Resto: "<< money << endl;
	
		
		i100 = money/100;
		cout << "Notas de 100: " << i100 << endl;
		
		money -= i100 * 100;
		cout << "Resto: " << money<< endl;
		
		
		i50 = money/50;
		cout << "Notas de 50: " << i50<<endl;
		
		money -= i50 * 50;
		cout << "Resto: " << money << endl;
		
		
		i20 = money/20;
		cout << "Notas de 20: " << i20 << endl; 
		
		money -= i20*20;
		cout << "Resto: " << money << endl;
		
		
		i10 = money/10;
		cout << "Notas de 10: " << i10 << endl;
		
		money -= i10*10;
		cout << "Resto: " << money << endl;
		
		
		i5 = money/5;
		cout << "Notas de 5: " << i5 << endl;
		
		money -=i5*5;
		cout << "Resto: " << money << endl;		
		
	
		i2 = money/2;
		cout << "Notas de 2: " << i2 << endl;
		
		money -=i2*2;
		cout <<"Resto: " << money << endl;
	
	}
	
}
