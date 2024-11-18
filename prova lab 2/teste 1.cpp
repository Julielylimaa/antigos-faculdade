#include <iostream>
#include <cstring>
#include <iomanip> 

using namespace std;

int main (){
	char nome[100];
	char presenca [2];
	int somafaltasjust = 0;
	int somaalunos = 0;
	int totalfaltas = 0;
	
	
	
	char falta[20]; //caso tenha faltado, deverá dizer se foi justificado ou nao
	
	cin.getline(nome, 100);
	
	while (strcmp(nome, "SAIR") != 0){
		if (strcmp(nome, "SAIR") == 0) //se o nome começar com sair
			break;						//o codigo nao rodará

		cin.getline(presenca, 2);
		
		if (strcmp(presenca, "F") == 0){
			//se o aluno faltou será perguntando se a falta foi justificada
			cin.getline(falta, 20);
			totalfaltas += 1;
			//se o aluno faltou sera somado uma unidade
		}	
			
		if (strcmp (falta, "justificado")==0){
			somafaltasjust += 1;
			//somará as faltas justificadas para o calculo da porcentagem
		}		
		
		
		somaalunos += 1; //soma todos os alunos
		
		
		cin.getline(nome, 100);
		
		if (strcmp(nome, "SAIR") == 0)
			break;

	}
	
	float porcentagem;
	
	porcentagem = (somafaltasjust * 100) / (totalfaltas * 1.0);
	
	cout << "Total de alunos: " << somaalunos << endl;
	cout << "Total de faltas: " << totalfaltas << endl;
	cout << fixed << setprecision (2);
	cout << "Porcentagem de faltas justificadas: " << porcentagem  << "%" << endl;
	
	return 0;
}