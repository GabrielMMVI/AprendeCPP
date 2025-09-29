#include <iostream>
#include <limits>
#include <iomanip>

const double n = 3.14159;
using namespace std;

int main (){
	double r;
	double A;
	
	cin >> r;
	A = (r * r) * n;
	
	cout << fixed << setprecision(4) <<  "A=" << A << endl;
	
	system("break");
	return 0;
	
	
	
}
