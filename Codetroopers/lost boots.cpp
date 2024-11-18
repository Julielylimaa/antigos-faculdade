#include <iostream>

using namespace std;

struct infos{
	int m; //tamanho do sapato
	char l; // esquerda ou direita
};

int main (){
	
	int n;
	
	
	while(cin >> n){
	
		infos vet[n];
		for (int i = 0; i < n; i++){
			cin >> vet[i].m >> vet[i].l;
		}
	
		int soma = 0; //soma dos pares formados
	
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
		    	if (vet[i].m == 0){
		        	break;
		    	}
		    	else
			    	if (vet[i].m == vet[j].m && vet[i].l != vet[j].l){
				    	soma ++;
				    	vet[j].m =0;
				    	vet[i].m = 0;
				  	}	
			}
		}
	
		cout << soma << endl;
	}
	return 0;
}