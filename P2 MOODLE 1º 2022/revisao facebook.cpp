#include <iostream>

using namespace std;

int main (){
	int vet[1000];
	int N; //numero de usuarios
	int maior, menor; //variaveis para armazenar valores
	
	cin >> N;
	
	//entrada de dados do vetor
	for (int i = 0; i < N; i++){
		cin >> vet[i];
	}
	
	maior = vet[0];
	menor = vet[0];
	
	//buscando no vetor
	for (int i = 0; i < N; i++){
		if (vet[i] > maior)
			maior = vet[i];
		
		if (vet[i] < menor)
			menor = vet[i];
	}
	
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: "  << maior << endl;
	
	
	
	return 0;
}