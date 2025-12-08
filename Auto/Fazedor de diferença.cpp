#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double x;
double y;
double diff;

int main(){

loop:
	x = 0; y = 0; diff = 0;	
	cin >> x;
	cin >> y;
	
	diff = x - y;
	
	cout << fixed << setprecision(4) << diff;
	goto loop;
	
}
