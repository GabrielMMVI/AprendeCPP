#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	double vHora;
	int hTrab;
	double totalReceber;
	
	cout << "=-=-=-=Sistema de pagamento=-=-=-=\n\n";
	
	cout << "Informe o valor pago pela hora do usu�rio: ";
	cin >> vHora;
	
	cout << "Agora informe quantas horas foram trabalhadas por esse operador: ";
	cin >> hTrab;
	cout << "\n\n";
	
	cout << "Calculando opera��o... Aguarde...\n\n\n";
	
	totalReceber = vHora * hTrab;
	
	cout << "Horas trabalhadas pelo operador: " << hTrab << "\n";
	cout << "Valor da hora do operador: " << vHora << "\n\n";
	cout << "Opera��o realizada: \n";
	cout << "Valor da Hora x Horas trabalhadas\n\n\n";
	
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
	
	cout << "Total a receber: " << totalReceber << "\n";
	
	
	return 0;
	system("pause");
}
