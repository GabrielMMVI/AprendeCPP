#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main (){
	
	string nome;
	double vendaMes, sal, bonus, salTotal;
	
	cin >> nome;
	cin >> fixed >> setprecision(2) >> sal;
	cin >> fixed >> setprecision(2) >> vendaMes;
	
	// calculo
	vendaMes = vendaMes * 0.15;
	salTotal = sal + vendaMes;
	
	cout << fixed << setprecision(2) << "TOTAL = R$ " << salTotal << endl;
	
	return 0;
	
	
}
