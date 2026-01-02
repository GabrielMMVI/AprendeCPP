#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

// Constantes fíxas
const double ioff = 0.0038;	//IoF fixo
const double iofd = 0.000082; //IoF diário


//Variáveis Globais

//Referente ao IoF
double ioft; //IoF total
double ioffixo; // Valor calculado do IoF fixo
double iofdiario; //Valor calculado do IoF diário

//Dias/parcelas
int parcelas; //Quantidade de parcelas
int dias;

//Valor do Emprestimo
double valorEmprestimo; //Valor do empréstimo
double PV; //Valor do empréstimo com taxas IoF aplcadas
double PMT; // Valor total das parcelas

//Taxas
double juros; //Porcentagem dos juros
double i; //Juros convertidos em porcentagem

//Equação PMT
double numerador;
double denominador;





void calculaEmprestimo(double valorEmprestimo, double juros, int parcelas){

	
	
	//Calculo dos valores	
	i = juros / 100; //Converte o juros em porcentagem
	ioffixo = valorEmprestimo * ioff; // Calcula valor do IoF Fixo do empréstimo
	dias = parcelas*30; //Transforma a quantidade de parcelas em dias (Aproximação de 30 dias)
	iofdiario = valorEmprestimo * iofd * min(dias,365); // Calcula valor do IoF diário do empréstimo
	
	ioft = ioffixo + iofdiario; // Cálculo total do IoF
	
	PV = valorEmprestimo * ioft;
	
	//Equação PMT
	numerador = i*pow((1+i),parcelas);
	denominador = pow((1+i),parcelas)-1;
	
	PMT = PV * (numerador / denominador);
	
	if(parcelas == 1){
		cout << fixed << setprecision(2);
		cout << "Valor da parcela: R$"<< PMT << endl;
	}else{
		
		cout << fixed << setprecision(2);
		cout << "Quantidade de parcelas solicitadas: " << parcelas << endl;
		cout << "Valor das parcelas: R$" << PMT;
	}
	
	
}

int main(){
	cout << "!!Calculadora de juros!!\n\n-------------------------------------------------------------------------------\n";
	
	cout << "Qual o valor do empréstimo que você deseja fazer?\nR$";
	cin >> valorEmprestimo;
	cout << "Qual a margem de juros?\n%:";
	cin >> juros;
	cout << "Em quantas parcelas será dividido?\nParcelas: ";
	cin >> parcelas;
	
	cout << "\n\n" << "Calculando valor do seu empréstimo...\n";
	cout << "Valor calculado!\n";
	calculaEmprestimo(valorEmprestimo, juros, parcelas);
	
	system("pause");
	return 0;
	
}
