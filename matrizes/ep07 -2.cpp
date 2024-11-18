#include <iostream>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int N; //ordem da matriz
	
	do{
		cout << "Ordem da matriz: ";
		cin >> N;
	}while (N < 1 || N > 10);
	
	
	int matriz[10][10];
	
	cout << "Elementos da matriz: ";
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j ++)
			cin >> matriz [i][j];
	}
	
	
	
	for (int i = 0; i < N; i++){
		
		for (int j = 0; j < N; j ++)
			cout << matriz [i][j] << "   ";
		
		cout << endl;
	}
	
	
	cout << "Soma dos elementos da diagonal principal: ";
	
	int somadp = 0;
	for (int i = 0; i < N; i++){
				somadp += matriz[i][i];
			//soma dos elementos da diagonal principal
			
	}
	
	cout << somadp;
	
	cout << "\nSoma dos elementos acima da diagonal principal: ";
	
	int somaacima = 0;
	
	for (int i = 0; i < N; i++){
		for (int j = i+1; j < N; j++)
				somaacima += matriz[i][j];
	}
	cout << somaacima; 
	
	
	
	cout << "\nSoma dos elementos abaixo da diagonal principal: ";
	
	int somaabaixo = 0;
	
	for (int j = 0; j < N; j++){
		for (int i = j+1; i < N; i++)
				somaabaixo += matriz[i][j];
	}
	
	cout << somaabaixo <<endl;
	return 0;
}