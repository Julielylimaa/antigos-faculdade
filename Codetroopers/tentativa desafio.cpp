#include <iostream>

using namespace std;

int main (){
	int f, r; //tamanho da fita e quantidade de gotas inicial
	
	cin >> f >> r;
	
	int vet[f];
	int pos[f];
	int x; //representa as primeiras gotas
	
	
	for (int i = 1; i<=f; i++){
		vet[i] = 0;
		pos[i]=0;
	}
	
	for (int i =1; i <=r; i++){
		cin >> x;
		vet[x] =1;
	}
	
	int soma;
	
	x = 1;
	int aux =0;
	int dias = 0;
	
	
	while(aux != -1){
		
		soma = 0;
		
		for (int i = 1; i<=f; i++){
			if (vet[i] ==1){
				pos[x]= i-1;
				x++;
				pos[x] = i+1;
				x++;
			}
		}
		
		for (int i = 1; i<=f; i++){
			if (pos[i]!= 0){
				vet[pos[i]] = 1;
			}
		}
		
		for (int i = 1; i<=f; i++){
			soma = soma + vet[i];
			
			
		}
		
		if (soma == f){
			aux = -1;
		}
		
		dias++;
	}
		
	cout << dias << endl;
	
	return 0;
}
