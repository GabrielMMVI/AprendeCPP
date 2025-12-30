#include <iostream>
#include <locale.h>
#include <limits>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	double media,sum,num;
	
	cout << "Digite '0' para parar\n\n";
	cout << "Digite o número: ";
	cin >> num;
	
	while (num != 0){

		sum = sum + num;
		i++;
	cout << "Digite o número: ";
	cin >> num;
	}
	media = sum/i;
	cout << i << endl;
	cout << fixed << setprecision(2) << media <<endl;
	
	system("pause");
	return 0;

}
