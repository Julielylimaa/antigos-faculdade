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

double soma(double x, int N){
	//função responsavel pela soma da serie
	
	
	double cos = 1;
	int exp = 2;
	int fatexp;
	double conta; //vai representar (x**exp/exp!)
	int sinal = -1; 
	//a série varia entre soma e subtração
	// a variavel sinal irá fazer essa mudança
	
	
	for (int i = 1; i < N; i++){
		//i vai contar o numero de termos da soma
		
		fatexp = fator(exp);
		//chama a função fator e armazena seu resultado
		//para cada valor de exp
		
		
		conta =(pow(x,exp)/fatexp);
		
		cos += conta * sinal ;
		
		sinal *= (-1);
		exp += 2; //a cada termo o exp é somado ao numero 2
	}
	
	return cos;
}



int main (){
	double x;
	int N;
	
	do{
		cout << "Número de termos (>=1 e <=20): ";
		cin >> N;
	} while (N < 1 || N >20);
	
	
	cout << "Valor de x: ";
	cin >> x;
	
	double resultado;
	
	resultado = soma(x, N);
	
	cout << "cos(x) = " << resultado << endl;
	
	return 0;
}


