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

int main (){
	int fatexp;
	double cos = 1, conta;
	double x;
	cin >> x;
	int exp = 2;
	int sinal = -1; //vai alterar o sinal da soma 
	
	for (int i = 1; i < 4; i++){
			
		fatexp = fator(exp);
		conta =(pow(x,exp)/fatexp);
		cout << "conta: " << conta<< endl;
		
		cos += conta * sinal ;
		cout << "cos: " << cos << endl;
		
		sinal *= (-1);
		
		exp += 2;
	}
		
	
	
	return 0;
}