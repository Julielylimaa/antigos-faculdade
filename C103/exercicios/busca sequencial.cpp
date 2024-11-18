#include <iostream>

using namespace std;

// Função que implementa a busca sequencial
// Se x for encontrado, retorna a posição do mesmo no vetor
// Se x não for encontrado, retorna -1
int sequencial(int vet[], int tam, int x)
{
	bool achou = false;
	int i = 0; //contador 
	
	while (achou == false && i < tam){
		achou = vet[i++] == x; 
		//achou vai ser verdade se o vetor na posição
		//i for igual a x (i++ vai somando ate chegar na ultima pos)
	}
	if (achou) //se achou == true vai retornar a posição
		return (i -1);
	else //se nao achou retorna -1
		return -1;
		
	
}

int main (){
    
	
	int vet[100]; 
	int x; //elemento que será procurado
	int tam = 0; //tamanho do vetor
	int y; //elementos de entrada que serao inseridos no vetor
	int i =0; //contador do vetor
	cin >> y;
	
	while (y != -1){
		//entrada de dados do vetor
		vet[i] = y;
		i++; 
		tam++;
		cin >> y;

	}	
	cin >> x;
	
	int busca;
	
	busca = sequencial(vet,tam,x);
	
	if (busca == -1){
		cout << x << " nao foi encontrado" << endl;
	}
	else 
		cout << x << " encontrado na posicao " << busca << endl;

	
	return 0;
}