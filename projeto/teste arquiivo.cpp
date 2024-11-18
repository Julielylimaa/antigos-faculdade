#include <iostream>
#include <fstream>

using namespace std;


struct processos{
	int num;
	int tempo;
	int prioridade;	
};


int main (){

	processos dados[10];
	ifstream arq;
	arq.open("arquivo.txt", ifstream::in);
	
	int vetor[50];
	int i = 0;
	
	while (!arq.eof()) //enquanto o arquivo nao terminar 
	{
		arq >> vetor[i];
		i++;
	}
	int cont  = i;
	int z = 0;
	
	for (int j=0; j < cont; j+=3){
		dados[z].num = vetor[j];
		dados[z].tempo = vetor[j+1];
		dados[z].prioridade = vetor[j+2];
		z++;
	}
	int total = z;
	
	for (int j = 1; j <=total; j++){
		for (int i = 0; i < total; i++){
			if (dados[i].prioridade == j){
				cout << "P" << dados[i].num;
				for (int x = 1; x <= dados[i].tempo; x++){
					cout << "-";
				}
			}
		}
	}
	

	

	
	arq.close();
	
	return 0;
}