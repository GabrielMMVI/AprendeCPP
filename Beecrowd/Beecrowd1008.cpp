#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main () {
	
	int n, hr;
	double vlhr ,sal;
	
	cin >> n;
	cin >> hr;
	cin >> vlhr;
	
	sal = hr * vlhr;
	
	cout << "NUMBER = " << n << endl;
	cout << "SALARY = U$" << fixed << setprecision(2) << sal << endl;
	
}
