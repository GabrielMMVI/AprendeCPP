#include <iostream>
#include <locale.h>
using namespace std;

int main (){ 
setlocale(LC_ALL, "portuguese");

int num;

cin >> num;
cout << endl;

(num >= 0)?
cout << "\nO n�mero digitado � positivo.\n" 
:
cout << "\nO n�mero digitado � negativo.\n";

system("pause");
return 0;

}
