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
	//para analisar quais valores s�o maiores/menores/iguais a media
	
		if (vetor[i] > media){
			maiores++;
		}
		else if (vetor[i] == media){
			iguais ++;
		}
		else 
			menores++;
	}
	
	
	cout << "\nM�dia: " << media << endl;
	cout << maiores << " maiores que a m�dia" << endl;
	cout << iguais << " iguais a m�dia" << endl;
	cout << menores << " menores que a m�dia" << endl;
	
	return 0;
}