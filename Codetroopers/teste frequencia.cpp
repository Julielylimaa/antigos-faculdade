#include <iostream>

using namespace std;

int main (){
	int n; //quantidade de numeros na lista
	
	cin >> n;
	
	int vet[n];
	
	
	int soma = n;
	
	for (int i = 0; i<n; i++){
		cin >> vet[i];
	}
	
	
	
	for (int i = 0; i < n-1; i++){
		for (int j= i+1; j<n; j++){
			if (vet[i] == vet[j]){
				vet[j] =-1;
			}
		}
	}
	
	for (int i =0; i < n; i++){
		if (vet[i] ==-1){
			soma --;
		}
	}
		



	

	cout << soma << endl;
	return 0;
}