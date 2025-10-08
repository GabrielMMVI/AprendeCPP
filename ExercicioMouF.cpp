#include <iostream>
#include <locale.h>
using namespace std;

int main () {
setlocale(LC_ALL, "portuguese");
 char gen;
 
 cin >> gen;
 
 (gen == 'F' || gen == 'f')?
 cout << "\n\n Sexo feminino.\n"
 :
 (gen == 'M' || gen == 'm')?
 cout << "\n\n Sexo masculino.\n"
 :
 cout << "\n\nSomente Masculino ou feminino aceitos.\n";


system("pause");
return 0;

}
