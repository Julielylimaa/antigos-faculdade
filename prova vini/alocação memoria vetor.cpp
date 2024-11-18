#include <iostream>

using namespace std;

int main(){
	int *vetor = NULL;//armazena os dados
	int tam; //tamanho desejado para o vetor
	int *p; //ponteiro aux para leitura e escrita
	
	
	//ler o tamanho desejado para o vetor
	cout << "qual o tamanho desejado?" << endl;
	cin >> tam;
	
	//alocar memoria para o vetor
	vetor = new int [tam]; //assim se cria vetores do tamanho que voce quer
	
	//preencher o vetor
	p = vetor;
	for (int i = 0; i < tam; i++){
		cin >> *p;
		p++;
	}
	//mostrar o vetor 
	p = vetor;
	
	for (int i=0; i<tam;i++){
		
		cout << *p << " ";
		p++;
	}
	
	delete [] vetor; //comando que vai liberar o espaço que foi usado pelo vetor
	
	return 0;
}