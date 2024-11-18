#include <iostream>

using namespace std;

int main (){
	int N;
	int i;
	int vetor[100];
	int menor;
	int guardavalor;
	
	cin >> N;

	
	for (i=0; i<N; i++){
		cin >> vetor[i];
		
		
	
		
		
	}
	
	
	for (i=0; i < N; i++){
		
		if (vetor[i + 1] < vetor[i]){
			guardavalor = vetor[i];
			vetor [i] = vetor[i+1]; 
			vetor[i + 1] = guardavalor;
		}
		
		
	}
	
	for (i=0; i < N; i++){
		cout << vetor[i] << " ";
	}
	
	
	return 0;
}