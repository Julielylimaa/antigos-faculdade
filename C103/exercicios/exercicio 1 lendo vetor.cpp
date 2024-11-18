#include <iostream>

using namespace std;

int main ()
{
	int vetor[15]; 
	int X; //elemento que será procurado
	int z = 0; //parametro para saber se o numero nao esta presente
	int tamanho;
	
	cout << "Digite o tamanho do vetor: ";
	cin >> tamanho;
	
	for (int j= 0; j <tamanho; j++){
		cout << "Numero " << j+1 << ": ";
		cin >> vetor[j]; //entrada de dados do vetor
	}
	
	
	cin >> X;
	
	for(int i=0; i < tamanho; i++){
		//for que irá rodar o vetor
		if (vetor[i] == X){
			//if que ira buscar x no vetor
			cout << i+1 << endl;
			z++; //se x estiver presente no vetor
			     //z será diferente de 0
		}
		
		
	}
	
	if (z == 0){
		//se z permanecer =0 significa que x nao foi encontrado
		cout << X << " nao esta presente" << endl;
	}
	
	
	return 0;
}