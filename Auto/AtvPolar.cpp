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
	
	
	cout << "Informe a letra da tarefa EM MAÍUSCULO: ";
	cin >> tarefa;
	cout << endl;
	
	cout << "Informe o responsável: ";
	cin >> resp;
	cout << endl;
	
	
	cout << "Informe a duração de dias da tarefa: ";
	cin >> duraDias;
	cout << endl;
	
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Duração de dias: " << duraDias << endl;
	cout << endl;
	
	cout << "Informe o valor do funcionario por dia: ";
	cin >> fixed >> setprecision(2) >> valorFunc;
	cout << endl;
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Valor do funcionário: "<< fixed << setprecision(2) << valorFunc << endl;
	cout << endl;
	
	cout << "Informe o valor da locação da máquina por dia: ";
	cin >> fixed >> setprecision(2) >> locaMaq;
	cout << endl;
	
	cout << "-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;
	cout << "Valor da locação da máquina: " << fixed << setprecision(2) << locaMaq << endl;
	cout << "\n\n";
	
	cout << "Calculando valores...\n\n";
	
	//calculo
	//calcula valor do funcionario:
	totalFunc = valorFunc * duraDias;
	cout << "======================================\n";
	cout << "Valor do funcionário: " << valorFunc << endl;
	cout << "Quantidade de dias: " << duraDias << endl;
	cout << "Operação: " << valorFunc << " x " << duraDias << endl;
	cout << "Total funcionário: " << totalFunc << endl;
	cout << "======================================\n";
	
	cout << endl;
	
	//calcula valor da locacao da maquina:
	totalMaq = locaMaq * duraDias;
	cout << "======================================\n";
	cout << "Valor da locação da máquina: " << locaMaq << endl;
	cout << "Quantidade de dias: " << duraDias << endl;
	cout << "Operação: " << locaMaq << " x " << duraDias << endl;
	cout << "Total locação Máquina: " << totalMaq << endl;
	cout << "======================================\n";
	
	cout << endl;
	
	//calcula valor total da tarefa:
	totalTar = totalMaq + totalFunc;
	cout << "======================================\n";
	cout << "Título: Tarefa " << tarefa << endl;
	cout << "Duração: " << duraDias << " dias." << endl;
	cout << "Responsável: " << resp << "|| valor por dia: R$" << valorFunc << "|| Total de horas: R$" << totalFunc << endl;
	cout << "Locação de máquina: Valor diária: R$" << locaMaq << "|| total: R$" << totalMaq << endl;
	cout << "Valor total da tarefa " << tarefa << ": " << totalTar << endl;
	cout << "======================================\n";
	
	goto loop;
	
	
	
} else if (faz = 0){
	system("pause");
	return 0;
}
	
	
}
