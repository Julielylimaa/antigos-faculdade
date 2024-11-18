#include <iostream>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	
	float vetor[5];
	int i;
	float soma = 0, media; // para calcular a media
	int maiores = 0, iguais = 0, menores = 0;
	
	
	for (i=0; i < 5; i++){
		cout << "Digite vetor[" << i << "]: ";
		cin >> vetor[i];
		soma += vetor[i];
	}
	
	media = soma / 5;
	
	for (i=0; i < 5; i++){
	//para analisar quais valores são maiores/menores/iguais a media
	
		if (vetor[i] > media){
			maiores++;
		}
		else if (vetor[i] == media){
			iguais ++;
		}
		else 
			menores++;
	}
	
	
	cout << "\nMédia: " << media << endl;
	cout << maiores << " maiores que a média" << endl;
	cout << iguais << " iguais a média" << endl;
	cout << menores << " menores que a média" << endl;
	
	return 0;
}