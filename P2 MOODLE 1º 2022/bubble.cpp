#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho){
	int i,j; // contadores
	int trab;
	bool troca;
	int limite;
	int contador = 0; //contar troca=true
	
	troca = true;
	limite = tamanho-1;
	
	while (troca){
		troca = false;
		for (i=0;i<limite;i++)
			if (vetor[i] > vetor[i+1])
			{
				trab = vetor[i];
				cout << "New trab:" << trab<< endl;
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j = i;
				troca = true;
				contador++;
				
			}
		limite = j;
	}
	cout << "Contador:" << contador << endl;
}
int main (){
	int tamanho;
	int vetor[100];
	
	//entrada do tamanho do vetor
	cin >> tamanho;
	
	//entrada de dados no vetor
	for (int i = 0; i< tamanho; i++)
		cin >> vetor[i];
	
	//chamando a função
	bubbleSort(vetor,tamanho);
	
	return 0;
}