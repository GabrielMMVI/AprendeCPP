#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int faz;
	string versao, responsavel, dia, mes, ckbpl,bpls;
	string cliente;
	
	cout << "Auto Email atualização Miari tecnologia.\n";
	cout << "========================================\n\n";
	
loop:
	cout << "Digite 1 para gerar email, digite 0 para fechar.\n";
	cin >> faz;
	cout << endl;
	
	cout << "========================================\n\n";
	
	if (faz == 1){
	cout << "Informe o responsável: ";
	getline(cin, responsavel);
	getline(cin, responsavel);
	cout << endl;
	
	cout << "Informe a versão do banco: ";
	cin >> versao;
	cout << endl;
	
	cout << "Informe as bpls [Coloque 1 para todas]";
	cin >> ckbpl;
	cout << endl;
	
	if (ckbpl != "1"){
		
		cout << "Informe as bpls com espaço e vírgula.\n";
		getline (cin, bpls);
		getline (cin, bpls);
		
	} else { 
		bpls = "Todas";
	}
	
	cout << "Informe o cliente: ";
	getline(cin, cliente);
	
	cout << "Informe o dia e o mês\n";
	cout << "Informe da seguinte maneira = 01/01\n\n";
	cout << "Dia: ";
	cin >> dia; 
	cout << "Mês: ";
	cin >> mes;
	
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n\n";
	cout << "Gerando email...\n\n\n";
	
	cout << "Data: " << dia << "/" << mes << "/2025\n";
	cout << "Versão BD: " << versao << endl;
	cout << "Responsável: " << responsavel << endl;
	cout << "BPLs: " << bpls << endl;
	cout << "Motivo: Atualização anual padrão\n";
	cout << "Responsável: " << responsavel << endl;
	cout << endl << endl;
	} 
	
	else {	return 0; }
	
	cout << "Deseja fazer outro? [1 para sim | 0 para não]\n";
	cin >> faz;
	
	if (faz == 1){ goto loop; } else if (faz == 0){ return 0; } else {
		
		cout << endl;
		cout << "Digite 1 OU 0";
		cout << endl;
		goto loop;
	}
	
	
	
	
}

