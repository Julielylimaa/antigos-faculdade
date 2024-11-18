#include <iostream>

using namespace std;

void InsertionSort(int vetor[], int tam){
	int i, j; //contadores
	
	int chave;//guardar valores
	
	for (j = 1; j < tam; j++){
		//for vai rodar o vetor inteiro começando pelo 2º elemento
		chave = vetor[j]; //a chave vai ser o 2º elemento do vetor
		
		i = j -1; //i vai ser a posição anterior de j
		while (i >= 0 && vetor[i] < chave){
			//enquanto o vetor na pos i for menor que o vetor guardado
			vetor[i+1] = vetor[i]; //o vetor da posição de cima passa a ser i
			i = i-1;
		}
		
		vetor[i+1] = chave;
	}
}

int main (){
	int vetor[100];
	int tam = 0;
	int i = 0;
	
	int y;
	cin >> y;
	
	while (y != 0){
	//entrada de dados do vetor
		vetor[i] = y;
		i++; 
		tam++;
		cin >> y;

	}
	
	
	InsertionSort(vetor, tam);
	
	for (int x=0; x < tam-1; x++){
		cout << vetor[x] << " ";
	}
	cout << vetor[tam -1];
	
	
	
	return 0;
}