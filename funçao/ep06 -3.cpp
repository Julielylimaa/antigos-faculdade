#include <iostream>

using namespace std;

double maior (double vet[], int x ){
	double maiorn; //maior numero no vetor
	
	maiorn = vet[0];
	
	for (int j = 1; j < x; j++){
	//irá percorrer o vetor para achar o maior elemento
		
		if (vet[j] > maiorn){
			maiorn = vet[j]; //maior elemento será salvo na variavel maiorn
		}
	}
	
	return maiorn;
	
}


int main (){
	setlocale (LC_ALL, "Portuguese");
	
	
	int x; //numero de elementos do vetor
	double vet[6];
	double resultado;
	
	do{
		cout << "Quantos elementos (1-5): ";
		cin >> x;
	}while (x < 1 || x > 5);
	
	
	cout << "Digite os " << x << " números...: ";
	
	for (int i = 0; i < x; i++){
		cin >> vet[i];
	}
	
	resultado = maior(vet, x);
	
	cout << "Maior elemento = " << resultado << endl;
	
	
	
	return 0;
}