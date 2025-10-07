#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;

#define pi 3.14159

int main (){
double R, vol;

cin >> R;

vol = 4.0/3.0 * pi * pow(R, 3);

cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;

return 0;
	
	
}
