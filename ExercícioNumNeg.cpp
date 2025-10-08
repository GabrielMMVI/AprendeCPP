#include <iostream>
#include <locale.h>
using namespace std;

int main (){ 
setlocale(LC_ALL, "portuguese");

int num;

cin >> num;
cout << endl;

(num >= 0)?
cout << "\nO número digitado é positivo.\n" 
:
cout << "\nO número digitado é negativo.\n";

system("pause");
return 0;

}
