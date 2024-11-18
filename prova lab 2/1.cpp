#include <iostream>
#include <cstring>

using namespace std;

struct dados {
	char nome[100];
	char pres;
};

int main (){
	int i = 0; //somará a quantidade de alunos cadastrados
	int faltajus = 0;
	char falta[20];
	char flag = 'SAIR';
	int x = 0; //se x for = 1 significa que a palavra SAIR foi digitada
	
	
	dados alunos[50]; //variavel (vetor) que salvará os dados da struct 
	
	cin.getline(alunos[i].nome, 100);
	
	if(strcmp(alunos[i].nome, flag) == 0)
		x = 1;
	
	
	while (x != 1){
		
		cin >> alunos[i].pres;
		
		if (strcmp(alunos[i].pres, "F") == 0){
			cin.getline(falta, 20);
		 	
		 	if (strcmp(falta, 'justificado')== 0){
				 faltajus++;
			 }
		}
		
		i++;
		
		cin.getline(alunos[i].nome, 100);
		
		if(strcmp(alunos[i].nome, flag) == 0)
			x = 1;
	
		
	}
	
	
	
	
	
	return 0;
}