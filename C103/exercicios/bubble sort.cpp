#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tam){
	int i, j; //contadores
	
	int trab;
	bool troca; 
	int limite;
	
	troca = true;
	limite = tam - 1;
	
	while (troca){
		troca = false;
		for (i = 0; i < limite; i++){
			if (vetor[i] > vetor[i+1]){
				trab = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j=i;
				troca = true;
			}
		}
		limite = j;
		cout << limite << endl;
	}
	

}

int main (){
	int vetor[100];
	int tam = 0;
	int i = 0;
	
	int y;
	cin >> y;
	
	while (y != -1){
	//entrada de dados do vetor
		vetor[i] = y;
		i++; 
		tam++;
		cin >> y;

	}
	
	
	bubbleSort(vetor, tam);
	
	for (int x=0; x < tam; x++){
		cout << vetor[x] << " ";
	}

	
	
	return 0;
}