#include <iostream>

using namespace std;

int FAT(int &x){
	//fun��o que far� o fatorial dos numeros
	int fat = x;
	for (int i = 1; i < x; i++){
		fat *= i;
	}
	
	return fat;
		
		
}


float COMBINA (int M, int P){
	//fun��o que resolver� a analise combinatoria
	
	float C;
	int y;//(M - P)
	
	y = M - P;
	
	int fatM, fatP, faty;
	//chamando a fun��o FAT
	fatM = FAT(M);
	fatP = FAT(P);
	faty = FAT(y);
	
	C = fatM / (faty * fatP) * 1.0;
	
	return C;
	
}

int main (){
	int M, P;
	
	//entrada dos dados 
	cout << "Digite o valor de M: ";
	cin >> M;
	cout << "Digite o valor de P: ";
	cin >> P;
	
	float comb;
	//chamando a fun��o COMBINA
	
	comb = COMBINA(M, P);
	
	cout << "C = " << comb << endl;

	
	return 0;
}