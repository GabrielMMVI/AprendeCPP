#include <iostream>
#include <limits>
#include <iomanip>
#include <locale.h>
using namespace std;
const double wA = 3.5;
const double wB = 7.5;

int main (){
	
	double A;
	double B;
	double wTotal;
	double MEDIA;
	
	cin >> fixed >> setprecision(1) >> A;
	cin >> fixed >> setprecision(1) >> B;
	
	wTotal = wA + wB;
	MEDIA = (A * wA + B * wB)/wTotal;
	
	cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;
	
	
}
