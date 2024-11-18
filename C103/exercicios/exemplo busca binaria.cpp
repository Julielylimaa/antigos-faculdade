#include <iostream>

using namespace std;

int binaria(int vet[], int tam, int x){
	int menor = 0;
	int maior = tam-1;
	int meio;
	
	bool achou = false;
	
	while(menor <= maior && achou == false){
		meio = (menor+maior)/2;
		
		if (x < vet[meio])
			maior = meio-1;
		else 
			if (x > vet[meio])
				menor = meio +1;
			
			else 
				achou = true;
	}
	
	if (achou)
		return meio;
	else
		return -1;
	
	
}
int main (){
	
	int vet[50];
	int tam;
	int x;
	
	cout << "qual o tamanho do vetor? ";
	cin >> tam;
	
	cout << "Digite os elementos do vetor em ordem crescente: ";
	
	cin >> vet[0];
	
	for (int i=1; i <tam; i++){
		cin >> vet[i];
		if (vet[i] < vet[i-1]){
			do{
				cout << "nao esta em ordem crescente, digite novamente: ";
				cin >> vet[i];
			}while (vet[i] < vet[i-1]);
		}
	}
	
	cout << "Digite o valor que deseja encontrar no vetor: ";
	cin >> x;
	
	
	int busca = binaria(vet, tam, x);
	
	if (busca != -1){
		cout << x << " esta na posicao " << busca << endl;
	}	
	else 
		cout << x << " nao foi encontrado no vetor" << endl;
	
	return 0;
}