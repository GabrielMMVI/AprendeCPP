#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

const double wA = 2;
const double wB = 3;
const double wC = 5;
int main (){
	double A, B, C;
	double wTotal;
	double MEDIA;
	
	cin >> fixed >> setprecision(1) >> A;
	cin >> fixed >> setprecision(1) >> B;
	cin >> fixed >> setprecision(1) >> C;
	
	wTotal = wA + wB + wC;
	MEDIA = (A * wA + B * wB + C * wC)/wTotal;
	
	cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
	
	
	
	
}
