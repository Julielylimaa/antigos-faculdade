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
		//saida dos elementos da matriz
		for (int j = 0; j < N; j ++)
			cout << matriz [i][j] << "   ";
		
		cout << endl;
	}
	
	
	cout << "Elementos da diagonal principal: ";
	
	for (int i = 0; i < N; i++){
		cout << matriz[i][i] << " ";
			//saida dos elementos da diagonal principal
	}
	
	cout << "\nElementos da diagonal secundária: ";
	
	int x = 1;
	int y = 0;

	while (x <= N){
		//saida dos elementos da diagonal secundária
		cout << matriz[y][N - x]<< " ";		
		y++;
		x++;
	}
	
	return 0;
}