#include <bits/stdc++.h>

using namespace std;

int main (){
	int f, r;
	//f = tamanho do vetor
	//r = quantidade de gotas iniciais
	
	cin >> f >> r;
	
	float partes[f];
	
	for (int i =0; i <f; i++){
		partes[i] = 0;
	}
	float x[r]; //aux para entrada de gotas iniciais
	
	float aux;
	
	
	for (int i = 0; i<r; i++){
		cin >> x[i];
	}
	
	
	for (int i = 0; i<=r; i++){
		
		
		if (r==1){
			if (x[i] == 1 || x[i] == f){
				partes[i] = f-1;
			}
			else {
				partes[i] = x[i]-1;
				partes[i+1] = f- x[i];
				break;
			} 
		}
		
		else 
			if (i == 0 && x[i] != 1){
				partes[i]= x[i]-1;
			}
			
			if (i == r-1 && x[i] != f){
				partes[i+1] =(f)-(x[i]);
				
			}
			else 
				if (i == r-1 && x[i] == f){
				partes[i] =round (((x[i]-1)- x[i-1])/2.0);
				
				}
		else {
			aux = ((x[i]-1)- x[i-1])/2.0;
			partes[i] = round(aux);
		}
			
	}
	
	float maior = partes[0];
	
	for (int i = 0; i < r; i++){
		if (partes[i] > maior){
			maior = partes[i];
		}
	}
	cout << maior << endl;
	
	return 0;
}