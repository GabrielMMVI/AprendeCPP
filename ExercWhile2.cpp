#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	i = 1;
	
	while (i <= 10){
		cout << i << endl;
		i++;
	}
	
	system("pause");
	return 0;

}
