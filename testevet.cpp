#include <iostream>

using namespace std;

int main (){
	int i, N;
	
	int vet1[51];
	
	int vet2[51], x;
	int y = 0;
	int menor;
	
	cin >> N;
	
	for (i=0; i < N; i++){
		cin >> vet1[i];
		
	}
	
	
	
	for (i=0; i < N; i++){
		menor = vet1[i];
		
		for (x= i+1; x < N; x++){
			
			if (vet1[x] < menor){
				menor = vet1[x];
			}
			
		}
		
		vet2[y]= menor;
		y++;
		
	}
	
	for (i=0; i < N; i++){
		cout << vet2[i] << " ";
	}
	
	
	return 0;
}