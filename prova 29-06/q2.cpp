#include <iostream>
#include <cmath>

using namespace std;

int fator(int &y){
	//função que fará o fatorial dos numeros
	int fat = y;
	for (int i = 1; i < y; i++){
		fat *= i;
	}
	
	return fat;
		
		
}
double SX(double x, int n){
	//função responsavel pela soma da serie
	
	
	double sx = 1;
	int exp = 2;
	int fatexp;
	double conta; //vai representar (x**exp/exp!)
	int sinal = -1; 
	//a série varia entre soma e subtração
	// a variavel sinal irá fazer essa mudança
	
	
	for (int i = 1; i < n; i++){
		//i vai contar o numero de termos da soma
		
		fatexp = fator(exp);
		//chama a função fator e armazena seu resultado
		
		
		conta =(pow(x,exp)/fatexp);
		
		sx += conta * sinal ;
		
		sinal *= (-1);
		exp += 2; //soma 2 ao expoente a cada termo
	}
	
	return sx;
}
	
int main (){
	double x;
	int n;//numero de termos 
	setlocale (LC_ALL, "Portuguese");
	
	
	do{
		cout << "Número de termos (>=1 e <=20): ";
		cin >> n;
	} while (n < 1 || n > 20);
	
	
	cout << "x: ";
	cin >> x;
	
	double resultado;
	
	resultado = SX(x, n); //vai salvar o resultado da função SX
	
	cout << "s(x) = " << resultado << endl;
		
	return 0;
}