#include <bits/stdc++.h>

using namespace std;

bool repete(int n){
	
	bool apareceu[10];
	for (int i = 0; i<9; i++){
		apareceu[i]= 0;
	}
	while (n!=0){
		int resto = n%10;
		if(apareceu[resto] == true)
			return true;
		
		apareceu[resto] = true;
		n = n/10;
		
	}
	
	return false;
}

int main (){
	
	int n,m;
	int v[5006]; 
	bool x;
	
	for (int i =0; i<5006; i++){
		x = repete[i];
		
		if (x == true){
			v[i] = 0; //se repete coloca 0;
		}
		else 
			v[i]=1; // se nao repete coloca 1;
	}
	
	int soma = 0;
	
	while (cin >> n >> m){
		for (int j = n+1; j<m; j++){
			soma+= v[j];
		}
		cout << soma << endl;
	}
	
	return 0;
}