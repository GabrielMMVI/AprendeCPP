#include <iostream>
#include <iomanip>
#include <limits>
#include<cmath>
using namespace std;

#define pi 3.14159
int main(){
double a, b, c;
double resA, resB, resC, resD, resE;

cin >> a;
cin >> b;
cin >> c;

resA = (a*c)/2;
resB = pi * pow(c, 2);
resC = ((a + b) * c) /2;
resD = pow(b, 2);
resE = a * b;


cout << "TRIANGULO: " << fixed << setprecision(3) <<resA << endl;
cout << "CIRCULO: " << fixed << setprecision(3) <<resB << endl;
cout << "TRAPEZIO: " << fixed << setprecision(3) <<resC << endl;
cout << "QUADRADO: " << fixed << setprecision(3) <<resD << endl;
cout << "RETANGULO: " << fixed << setprecision(3) <<resE << endl;


	return 0;
	
}
