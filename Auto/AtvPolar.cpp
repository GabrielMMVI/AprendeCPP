#include <iostream>
#include <limits>
#include <iomanip>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");

	int duraDias;
	double valorFunc, locaMaq;
	double totalFunc, totalMaq, totalTar;
	string resp;
	char tarefa;
	int faz;
	
loop:
	cout << "Digite 1 para fazer e 0 para fechar" << endl;
	cin >> faz;
	

	if (faz = 1){
	
	
	cout << "Informe a letra da tarefa EM MA�USCULO: ";
	cin >> tarefa;
	cout << endl;
	
	cout << "Informe o respons�vel: ";
	cin >> resp;
	cout << endl;
	
	
	cout << "Informe a dura��o de dias da tarefa: ";
	cin >> duraDias;
	cout << endl;
	
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Dura��o de dias: " << duraDias << endl;
	cout << endl;
	
	cout << "Informe o valor do funcionario por dia: ";
	cin >> fixed >> setprecision(2) >> valorFunc;
	cout << endl;
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Valor do funcion�rio: "<< fixed << setprecision(2) << valorFunc << endl;
	cout << endl;
	
	cout << "Informe o valor da loca��o da m�quina por dia: ";
	cin >> fixed >> setprecision(2) >> locaMaq;
	cout << endl;
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Valor da loca��o da m�quina: " << fixed << setprecision(2) << locaMaq << endl;
	cout << "\n\n";
	
	cout << "Calculando valores...\n\n";
	
	//calculo
	//calcula valor do funcionario:
	totalFunc = valorFunc * duraDias;
	cout << "======================================\n";
	cout << "Valor do funcion�rio: " << valorFunc << endl;
	cout << "Quantidade de dias: " << duraDias << endl;
	cout << "Opera��o: " << valorFunc << " x " << duraDias << endl;
	cout << "Total funcion�rio: " << totalFunc << endl;
	cout << "======================================\n";
	
	cout << endl;
	
	//calcula valor da locacao da maquina:
	totalMaq = locaMaq * duraDias;
	cout << "======================================\n";
	cout << "Valor da loca��o da m�quina: " << locaMaq << endl;
	cout << "Quantidade de dias: " << duraDias << endl;
	cout << "Opera��o: " << locaMaq << " x " << duraDias << endl;
	cout << "Total loca��o M�quina: " << totalMaq << endl;
	cout << "======================================\n";
	
	cout << endl;
	
	//calcula valor total da tarefa:
	totalTar = totalMaq + totalFunc;
	cout << "======================================\n";
	cout << "T�tulo: Tarefa " << tarefa << endl;
	cout << "Dura��o: " << duraDias << " dias." << endl;
	cout << "Respons�vel: " << resp << "|| valor por dia: R$" << valorFunc << "|| Total de horas: R$" << totalFunc << endl;
	cout << "Loca��o de m�quina: Valor di�ria: R$" << locaMaq << "|| total: R$" << totalMaq << endl;
	cout << "Valor total da tarefa " << tarefa << ": " << totalTar << endl;
	cout << "======================================\n";
	
	goto loop;
	
	
	
} else if (faz = 0){
	system("pause");
	return 0;
}
	
	
}
