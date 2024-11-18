#include <iostream>

using namespace std;

int main (){
	int n; //quantidade de numeros na lista
	int x; //numero de identificação
	cin >> n;
	
	bool vet[1000006];
	
	
	int soma =0;
	
	
	for (int i =0; i <1000006; i++){
		vet[i]=false;
	}
	
	
	for (int j = 0; j<n; j++){
		cin >> x;
		vet[x] = true;
		
	}
	

	for (int i =0; i <1000006; i++){
		if (vet[i] == true){
			soma++;
		}
	}

	cout << soma << endl;
	return 0;
}