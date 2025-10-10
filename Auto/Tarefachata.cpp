#include <iostream>
using namespace std;

int main (){
	int num, v;
	string texto;
	num = 1;
	v = 1;
loop:
	
	if(num < 100)
	{
	cout << "INPUT 'C:/BdAtt/AtualizaBancoV" << v << "." << num <<".sql';" << endl; 
	num++;
	} 
	
	else if(num == 100 && v < 13) 
	{
	v++;
	num = 1;	
	} 
	
	else{return 0;}
	

	return 0;
	
	
}
