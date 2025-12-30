#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	int i;
	
	while(i<100){
		cout << i << endl;
		
		if(i == 5){
			break; //Encerra o ciclo
		}
		
		i ++;
	}
}
