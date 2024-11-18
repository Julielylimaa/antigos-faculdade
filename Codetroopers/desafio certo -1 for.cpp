#include <iostream>

using namespace std;


int main (){
	int f, r; //comprimento da fita e numero de gotas
	
	cin >> f >> r;
	
	int vet[f];
	int pos[f];
	int soma; //soma de casas pretas
	int x; //var aux para posiçao das primeiras gotas
	
	
	for (int i=0; i<f; i++){
		vet[i] = 0;
	}
	for (int i=0; i<r; i++){
		cin >> x;
		vet[x-1] = 1;
	}
	
	int dias = 0;
	int aux = 0;
	while (aux != -1){
		soma = 0;
		
		
		for (int i = 0; i < f; i++){
			if (vet[i]==1){
				pos[i-1] =1;
				pos[i+1]= 1;
			}
		}
		
		for (int j=0; j<f; j++){
			if (pos[j] ==1){
				vet[j] = 1;
				pos[j] = 0;
			}
			soma = soma + vet[j];
		}
		
		
		
		
		
		if (soma == f){
			aux = -1;
		}
		
		dias++;
	
	}
	cout << dias << endl;
	
	return 0;
}