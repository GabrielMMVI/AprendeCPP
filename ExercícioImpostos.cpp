#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double s, vHora, horasTrab, ir, inss, sind, sLiquido;
	ir = 0.11;
	inss = 0.08;
	sind = 0.05;
	
	cout << "Calculador de salários: \n\n";
	
	cout << "Insira a quantidade de horas que você trabalhou: ";
	cin >> horasTrab;
	cout << "Insira o valor da sua hora: ";
	cin >> vHora;
	
	s = vHora * horasTrab;
	
	cout << "Calculando valor dos impostos...\n";
	// {
		 sLiquido = s - s*ir;
		 sLiquido = sLiquido - s*inss;
		 sLiquido = sLiquido - s*sind;
	// }
	cout << "Impostos calculados.\n\n";
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n\n";
	
	
	cout << "Salário bruto: R$" << s << "\n";
	cout << "----------------------------------\n\n";
	
	cout << "-+-+-Reduções de imposto-+-+-\n";
	cout << "-Imposto cobrado de maneira individual aos valores indicados-\n";
	cout << "Redução de Imposto de Renda(11%): " << s*ir << "\n";
	cout << "Redução INSS(8%): " << s*inss<< "\n";
	cout << "Redução de imposto do sindicato(5%): " << s*sind << "\n";
	cout << "----------------------------------\n\n";
	
	
	cout << "Salário final: R$" << sLiquido << "\n";
	
	system("Pause");
	return 0;
}
