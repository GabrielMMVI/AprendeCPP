#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main (){
	int qt1, qt2, id1, id2;
	double preco1, preco2, precoTotal;
	
	cin >> id1;
	cin >> qt1;
	cin >> preco1; 
	
	cin >> id2;
	cin >> qt2;
	cin >> preco2;
	
	precoTotal = qt1 * preco1 + qt2 * preco2;
	
	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << precoTotal << endl;
	
	return 0;
	
	
}
