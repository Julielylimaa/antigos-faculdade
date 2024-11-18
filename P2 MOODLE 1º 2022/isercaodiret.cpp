#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho){
	int i, j;
	int chave;
	
	for (j = 1; j<tamanho; j++){
		chave = vetor[j];
		i = j-1;
		while ((i>= 0)&& (vetor[i]< chave)){
			vetor[i+1] = vetor[i];
			i = i-1;
		}
		vetor[i+1]=chave;
	}
}
int main (){
	int vetor[100];
	int N; //var aux
	int i =0; //contador
	
	//entrada de dados no vetor
	cin >> N;
	while (N != 0){
		vetor[i] = N;
		i++;
		cin >> N;
	}
	
	//chamando a funçao
	insercaoDireta(vetor,i);
	
	//saida de dados do vetor
	for (int j = 0; j < i; j++)
		cout << vetor[j]<< " ";
	
	return 0;
}