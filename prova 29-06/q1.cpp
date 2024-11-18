#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int N;
	
	do{
		cout << "Ordem da matriz: ";
		cin >> N;
		
	}while (N <= 2 || N >=  50);
	//entrada da ordem da matriz (2 <= N <= 50
	
	float matriz[51][51];
	
	
	
	
	for (int i = 0; i < N; i++){
		//percorre as linhas da matriz
		for (int j = 0; j < N; j ++)
			//percorre as colunas da matriz 
			cin >> matriz [i][j];
			//entrar� todos os elementos da primeira linha 
			//at� chegar na ultima coluna 
	}
	
	float menorprincipal = matriz[0][0];
	float maiorprincipal = matriz[0][0];
	
	//maior e menor elemento da diagonal principal
	
	int posmaiorprin = 0; //vai salvar a posi��o do maior elemento na diagonal principal
	int posmenorprin = 0; // vai salvar a posi��o do menor elemento na diagonal principal
	
	
	for (int i = 0; i < N; i++){
		//percorre a diagonal principal
			if (matriz[i][i] <= menorprincipal){
				menorprincipal = matriz[i][i];
				posmenorprin = i +1; // +1 pois a posi��o do vetor come�a no zero
			}
			
			if (matriz[i][i] >= maiorprincipal){
				maiorprincipal = matriz[i][i];
				posmaiorprin = i + 1;
				
			}
	}
	
	cout << "Maior elemento da diagonal principal: " << maiorprincipal << endl;
	cout << "Posi��o: linha " << posmaiorprin << " e coluna " << posmaiorprin << endl;
	cout << "Menor elemento da diagonal principal: " << menorprincipal << endl;
	cout << "Posi��o: linha " << posmenorprin << " e coluna " << posmenorprin << endl;
	
	
	//maior e menor da diagonal secund�ria
	int x = 1; //vai subtrair na coluna 
	int y = 0; //representa a linha

	//matriz[y][N - x]: y primeiro elemento da secundaria, pois
	//y representa a primeira linha [0] e N - x representa a 
	//ultima coluna que vai ser a ordem (N) - 1 e conforme as linhas
	//vao descendo somamos 1 na variavel x;
	
	
	float maiorsecundaria = matriz[y][N - x];
	float menorsecundaria = matriz[y][N - x];
	
	//salvar a posi��o do menor e maior elemento na diagonal secundaria
	int linhamaiorsec = 0;
	int colunamaiorsec = 0;
	int linhamenorsec = 0;
	int colunamenorsec = 0;
	
	while (x <= N){
		//diagonal secundaria come�a na ultima coluna e primeira linha
		
		if (matriz[y][N - x] > maiorsecundaria){
			maiorsecundaria = matriz[y][N - x];
			linhamaiorsec = y +1;
			colunamaiorsec = (N - x) +1;
		}	
		
		if (matriz[y][N - x] < menorsecundaria){
			menorsecundaria = matriz[y][N - x];
			linhamenorsec = y + 1;
			colunamenorsec = (N-x)+1;
		}
		y++;
		x++;
	}
	
	
	
	cout << "\nMaior elemento da diagonal secundaria: " << maiorsecundaria << endl;
	cout << "Posi��o: linha " << linhamaiorsec << " e coluna " << colunamaiorsec << endl;
	cout << "Menor elemento da diagonal secundaria: " <<  menorsecundaria << endl;
	cout << "Posi��o: linha " << linhamenorsec << " e coluna " << colunamenorsec << endl;
	
	
	
	return 0;
}