#include <iostream>

using namespace std;

struct dadosequipe{
	char nome[30];
	int acertos, erros, tempo;
};

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int N;//numero de equipes cadastradas
	int i;
	float NF[11];//nota final 
	int maiornota = 0;
	int empate = -1;
	
	
	do{
		cout << "Quantas equipes serão cadastradas (máximo 10): ";
		cin >> N;
		
	}while (N>10);
	
	dadosequipe equipe[11];
	
	
	
	//entrada dos dados de cada equipe 
	for (i=0; i<N; i++){
		cin.ignore();
		
		cout << "Nome da equipe " << i +1 << ": ";
		cin.getline(equipe[i].nome, 30);
		
		cout << "Número de acertos: ";
		cin >> equipe[i].acertos;
		
		cout << "Número de erros: ";
		cin >> equipe[i].erros;
		
		cout << "Tempo (em minutos): ";
		cin >> equipe[i].tempo;
		
		NF[i]=((5 * equipe[i].acertos) - (2 * equipe[i].erros) + 1)/ (equipe[i].tempo * 1.0);
		
		
		
		if (NF[maiornota] < NF[i])
			maiornota = i;
		
	}
	
	//analisar se há notas iguais
	
	for (int j = 0; j< N; j++){
		if (j != maiornota && NF[j] == NF[maiornota])
			empate = j;
	}
	
	if (empate > 0){
		cout << "As equipes vencedoras são: " << endl;
		cout << equipe[maiornota].nome << endl << equipe[empate].nome << endl;
	}
	else 
		cout << "A equipe vencedora é: " << endl << equipe[maiornota].nome << endl;
	
	return 0;
}