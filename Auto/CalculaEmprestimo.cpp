#include<iostream>
#include<locale.h>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;


void calculaEmprestimo(double valorEmprestimo, double juros, int parcelas){
	//constantes fixas privadas
	const double ioff = 0.0038;	//IoF fixo
	const double iofd = 0.000082; //IoF diário

	//Variáveis privadas
	
	//Referente ao IoF
	double ioft; //IoF total
	double ioffixo; // Valor calculado do IoF fixo
	double iofdiario; //Valor calculado do IoF diario
	
	//Referente ao cálculo de parcelas
	int dias;//Dias/parcelas
	
	//Valores usados na equação PMT
	double PV; //Valor do empréstimo com taxas IoF aplcadas
	double PMT; // Valor total das parcelas
	//Taxas
	double i; //Juros convertidos em porcentagem
	double CET; //Custo Efetivo Total

	//Equacao PMT
	double numerador; 
	double denominador;
	double potencia;
	double totalPagar;


	
	//Calculo dos valores	
	i = juros / 100; //Converte o juros em porcentagem
	ioffixo = valorEmprestimo * ioff; // Calcula valor do IoF Fixo do emprestimo
	dias = parcelas*30; //Transforma a quantidade de parcelas em dias (Aproximacao de 30 dias)
	iofdiario = valorEmprestimo * iofd * min(dias,365); // Calcula valor do IoF diario do emprestimo
	
	ioft = ioffixo + iofdiario; // Calculo total do IoF
	
	PV = valorEmprestimo + ioft;
	
	//Equacao PMT
	potencia = pow(1+i,parcelas);
	numerador = i*potencia;
	denominador = potencia -1;
	
	PMT = PV * (numerador / denominador);
	
	totalPagar = PMT*parcelas;
	
	//Custo efetivo Total
	CET = (totalPagar/valorEmprestimo -1) * 100;
	
	
	
	if(parcelas == 1){
		cout << fixed << setprecision(2);
		cout << "|__________________________________________________________|\n";
		cout << "|                    :: Parcela única ::                   |\n";
		cout << "|__________________________________________________________|\n";
		cout << "| -> Valor financiado: " << valorEmprestimo << "\n";
		cout << "| -> Valor a pagar: R$"<< PMT << "\n";
		cout << "| -> Valor calculado do IoF: R$" << ioft << "\n"; 
		cout << "| -> Valor calculado dos juros: R$" << totalPagar - PV <<endl;
		cout << "| -> Valor presente (Empréstimo + IOF): R$" << PV << endl;
		cout << "| -> Custo total efetivo: " << CET << "%\n" << endl;
		cout << "|__________________________________________________________|\n\n\n\n";
	}else{
		
		cout << fixed << setprecision(2);
		cout << "|__________________________________________________________|\n";
		cout << "|                  :: Múltiplas parcelas::                 |\n";
		cout << "|__________________________________________________________|\n";
		cout << "| -> Valor financiado: R$" << valorEmprestimo << endl;
		cout << "| -> Quantidade de parcelas solicitadas: " << parcelas << endl;
		cout << "| -> Valor individual das parcelas: R$" << PMT << endl;
		cout << "| -> Valor total a Pagar: R$" << totalPagar << endl;
		cout << "| -> Valor calculado do IoF: R$" << ioft << endl;
		cout << "| -> Valor calculado dos juros: R$" << totalPagar - PV <<endl;
		cout << "| -> Valor presente (Empréstimo + IOF): R$" << PV << endl;
		cout << "| -> Custo total efetivo: " << CET << "%\n";
		cout << "|__________________________________________________________|\n\n\n\n";
	}
	
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");


	char faz;
	
	cout << "|__________________________________________________________|\n";
	cout << "|       - + - + - + - Simulador de Juros - + - + - + -     |\n";
	cout << "|__________________________________________________________|\n";
	
	cout << "|Algorimo de cálculo premeditado de impostos e empréstimos.|\n";
	cout << "|Informe o valor desejado, juros (sem a porcentagem) e     |\n";
	cout << "|a quantidade de parcelas desejadas para o algoritmo       |\n";
	cout << "|realizar a equação de juros.                              |\n";
	
	cout << "|__________________________________________________________|\n";
	cout << "|            Deseja iniciar a simulação? (Y/n)             |\n";
	cout << "|__________________________________________________________|\n";
	cout << ":";
	cin >> faz;	
	
	
	do{
		
		if(faz != 'y' && faz != 'Y'){
			system("pause");
			return 0;			
		}else {
		
		
	int parcelas; //Quantidade de parcelas
	double valorEmprestimo; //Valor do empréstimo
	double juros; //Porcentagem dos juros
		
	
	
	cout << "\n\n\n";
	

	
	cout << "Qual o valor do empréstimo que você deseja fazer?\nR$";
	cin >> valorEmprestimo;
	while(!(cin >> valorEmprestimo))do{
		cout << "Entrada de valor inválida!\n";
		cout << "Insira um valor correto: R$";
		cin >> valorEmprestimo;
		
		
	}
		
	
	cout << "Qual a margem de juros?\n%:";
	cin >> juros;
	if(!(cin >> juros)){
		cout << "Entrada de juros inválida!\nEncerrando aplicação!\n";
		system("pause");
		return 0;
	}
	cout << "Em quantas parcelas será dividido?\nParcelas: ";
	cin >> parcelas;
	if(!(cin >> parcelas)){
		cout << "Entrada de parcelas inválida!\nEncerrando aplicação\n";
		return 0;
	}
	cout << endl;
	
	cout << "|__________________________________________________________|\n";
	cout << "|                                                          |\n";	
	cout << "|                     Equação realizada!                   |\n";
	cout << "|                                                          |\n";	

	calculaEmprestimo(valorEmprestimo, juros, parcelas);
	
	
	
	cout << "|__________________________________________________________|\n";
	cout << "|             Deseja realizar outra simulação?             |\n";
	cout << "|__________________________________________________________|\n";
	cout << ":";
	cin >> faz;
	
	}
	
  } while (faz == 'y' || faz == 'Y');
			
		cout << "Encerrando algoritmo!\n\n\n";
		system("Pause");
		return 0;
}
