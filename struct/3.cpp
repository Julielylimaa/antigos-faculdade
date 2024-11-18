#include <iostream>

using namespace std;

struct dados{
	char nome[50];
	int notas[5];
	int soma;
};

int main (){
	int n; //numero de participantes 
	int i, j, k; //parametro for
	int maior;
	
	cin >> n;
	cin.ignore();
	
	dados participante[20];
	
	for (i = 0; i < n; i++){
		cin.getline(participante[i].nome, 50);
		participante[i].soma = 0;
		
		for (j = 0; j < 4; j++){
			cin >> participante[j].notas[j];
			participante[i].soma += participante[j].notas[j];
		}
		
		cin.ignore();
	}
	
	maior = participante[0].soma;
	
	for (k = 1; k < n; k++){
		if (participante[k].soma > maior)
			maior = k;
	}
	
	cout << "Vencedor: " << participante[maior].nome << endl;
	return 0;
}