#include <iostream>

using namespace std;

int main (){
	int N; //tamanho do vetor
	int *vetor = NULL;
	int *p; //auxiliar para entrada de dados
	int *s; //ponteiro de saida
	
	//entrada de dados
	cin >> N;
	
	//declarando o vetor com tamanho N
	vetor = new int [N];
	
	p = vetor; //p aponta para o endereço de vetor
	for (int i = 0; i <N; i++){
		//como p representa o endereço, *p representa a variavel
		//armazenada no vetor
		cin >> *p;
		p++;
	}
	
	s = vetor;
	for (int i = 0; i <N; i++){
		cout << *s << " ";
		s++;
		
	}
	
	return 0;
}