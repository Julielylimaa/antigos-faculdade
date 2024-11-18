#include <iostream>


using namespace std;


int main (){
	setlocale (LC_ALL, "Portuguese");
	int i;
	int vetor[5];
	int x;
	int saida = 0; 
	
	
	for (i=0; i < 5; i++){
		cin >> vetor[i];
	}
	
	
	for (i=0; i < 5; i++){
		if (vetor[i] == 0)
			saida ++; 
	// se o valor na posiçao i for =0 sera somado 1 a variavel saida
	}		
	
	if (saida > 0){	
		cout << "Posições: ";
	//se saida for > 0 significa que existem valores iguais a 0 no vetor
		for (i=0; i < 5; i++){
		// usado para saida das posições
			if (vetor[i] == 0){
				cout << i << "  ";
			}
		}
	
	}	
	else 
		cout << "Nenhum elemento zero no vetor" << endl;
	// se for = 0 significa que não há valores 0 no vetor
	
	
	
	
	return 0;
}