#include<iostream>
#include<locale.h>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

// Constantes f�xas
const double ioff = 0.38;	//IoF fixo
const double iofd = 0.0082; //IoF di�rio


//Vari�veis Globais

//Referente ao IoF
double ioft; //IoF total
double ioffixo; // Valor calculado do IoF fixo
double iofdiario; //Valor calculado do IoF diario


int parcelas; //Quantidade de parcelas
int dias;//Dias/parcelas

//Valor do Emprestimo
double valorEmprestimo; //Valor do empr�stimo
double PV; //Valor do empr�stimo com taxas IoF aplcadas
double PMT; // Valor total das parcelas

//Taxas
double juros; //Porcentagem dos juros
double i; //Juros convertidos em porcentagem

//Equacao PMT
double numerador; 
double denominador;
double potencia;





void calculaEmprestimo(double valorEmprestimo, double juros, int parcelas){

	
	
	//Calculo dos valores	
	i = juros / 100; //Converte o juros em porcentagem
	ioffixo = valorEmprestimo * (ioff * 0.01); // Calcula valor do IoF Fixo do emprestimo
	dias = parcelas*30; //Transforma a quantidade de parcelas em dias (Aproximacao de 30 dias)
	iofdiario = valorEmprestimo * (iofd*0.01) * min(dias,365); // Calcula valor do IoF diario do emprestimo
	
	ioft = ioffixo + iofdiario; // Calculo total do IoF
	
	PV = valorEmprestimo + ioft;
	
	//Equa��o PMT
	potencia = pow(1+i,parcelas);
	numerador = i*potencia;
	denominador = i*potencia -1;
	
	PMT = PV * (numerador / denominador);
	
	if(parcelas == 1){
		cout << fixed << setprecision(2);
		cout << "Valor da parcela: R$"<< PMT << endl;
	}else{
		
		cout << fixed << setprecision(2);
		cout << "Quantidade de parcelas solicitadas: " << parcelas << endl;
		cout << "Valor das parcelas: R$" << PMT << "\n\n\n";
	}
	
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char faz;
	
	cout << "Deseja realizar opera��o de empr�stimo(Y/N)? ";
	cin >> faz;
	
loopFaz:
	
	if(faz == 'y' || faz == 'Y'){
	
	cout << "!!Calculadora de juros!!\n\n-------------------------------------------------------------------------------\n";
	
	cout << "Qual o valor do empr�stimo que voc� deseja fazer?\nR$";
	cin >> valorEmprestimo;
	cout << "Qual a margem de juros?\n%:";
	cin >> juros;
	cout << "Em quantas parcelas ser� dividido?\nParcelas: ";
	cin >> parcelas;
	
	cout << "\n\n" << "Calculando valor do seu empr�stimo...\n";
	cout << "Valor calculado!\n";
	calculaEmprestimo(valorEmprestimo, juros, parcelas);
	}
	
	else if(faz == 'n' || faz == 'N') {
		cout << "Fechando opera��o...\n";
		
		system("Pause");
		return 0;}
	
	else{
		cout << "Opera��o inv�lida!\nFechando Algoritmo...\n";
		
		system("Pause");
		return 0;
	}
	
	cout << "Deseja simular um empr�stimo novamente(Y/N)? ";
	cin >> faz;
	
	if(faz == 'y'|| faz == 'Y')  {goto loopFaz;}
	 
	else if(faz == 'n' || faz == 'N') {
	cout << "Fechando opera��o...\n";
	
	system("Pause");
	return 0;}
	
	else{
		cout << "Opera��o inv�lida!\nFechando Algoritmo...\n";
	}
	
}
