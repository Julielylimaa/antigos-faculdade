#include <iostream>

using namespace std;


int binaria(int vetor[],int tamanho, int x){
	bool achou = false; //nao achou o id
	
	int menor = 0; //menor posição do vetor
	int maior = tamanho-1; //maior posição do vetor
	int meio;
	
	
	
	while (menor <= maior && achou == false)
		//enquanto nao rodar o vetor inteiro e nao achar x
	{
		meio = (menor + maior)/ 2;
		
		if (x < vetor[meio]) 
		//se x for menor que o elemento que está no meio 
		{
			maior = meio - 1;//o maior elemento passa a ser o do meio -1 
		}
		else 
			if (x > vetor[meio])
			//se x for maior que o elemento que está no meio
				menor = meio + 1; 
				//o menor passa a ser o meio +1
		
			else 
				achou = true; 
				//se ele nao for maior nem menor, ele é igual
			
	
	}
	
	if (achou){
		return meio;
	}
	else 
		return -1;
	
	
}

int main (){
	
	int vetor[20];
	int y; //elementos de entrada que serao inseridos no vetor
	int i =0; //contador do vetor
	int tamanho = 0;
	
	cin >> y;
	
	while (y != -1){
		//entrada de dados do vetor
		vetor[i] = y;
		i++; 
		tamanho++;
		cin >> y;
	}	
	
	int x;
	
	cin >> x;
	
	int busca;
	
	busca = binaria(vetor, tamanho, x);
	
	if (busca == -1){
		cout << "Nao possui acesso" << endl;
	}
	else 
		cout << "Possui acesso" << endl;
	
	return 0;
}