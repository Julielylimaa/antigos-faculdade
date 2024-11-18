#include <iostream>

using namespace std;

int main (){
	
	int vetor[100]; //vetor de dados
	int i = 0; //contador elementos do vetor
	int elemento; //elemento adicionado ao vetor
	int X; // elemento a ser procurado
	int pos = -1; //posiçao que foi encontrado
	
	
	//lendo elementos do vetor
	do{
		cin >> elemento;
		vetor[i] = elemento;
		i++;
	}while(elemento != -1);

	int tam = i; //tamanho vetor
	
	//lendo x
	cin >> X;
	
		//procurando x no vetor
	for (int i = 0; i < tam; i++){
		if (vetor[i] == X)
			pos = i;
	}
	
	//mostrando a posição que x foi encontrado
	if (pos == -1)
		cout << X << " nao encontrado" << endl;
	else 
		cout << X << " encontrado na posicao " << pos << endl;
	

	
	return 0;
}