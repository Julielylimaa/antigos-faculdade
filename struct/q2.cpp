#include <iostream>
#include <cstring>

using namespace std;

struct dados{
	char nome[81];
	char cpf [12];
	int idade;
};

int main (){
	setlocale(LC_ALL, "Portuguese");
	dados participante[201];
	
	cout << "Registro de participantes da XXVI Corrida Pró Asilo 2021: " << endl;
	
	int n; //flag para sair 
	int i = 0; //posição do vetor participante
	int j;//para analisar qual cpf é igual o desejado;
	char verificarcpf[12];
	
	do{
		cout << "Nome completo: ";
		cin.getline(participante[i].nome, 81);
		cout << "CPF: ";
		cin.getline(participante[i].cpf, 12);
		
		do{
			cout << "Idade: ";
			cin >> participante[i].idade;
		}while(participante[i].idade < 10 || participante[i].idade > 80);
		
		i++;
		
	//maximo 200 cadastros	
		if (i == 200){
			break;	
		}
		
		cout << "Novo registro? (1-sim 0-não) ";
		cin >> n;
		
		if (n == 1)
			cin.ignore();
		
	}while (n!=0);
	
	cin.ignore();
	cout << "Digite o CPF que deseja verificar: ";
	
	cin.getline(verificarcpf, 12);
	
	
	for(j=0; j<=i; j++){
		if (strcmp(verificarcpf, participante[j].cpf)== 0){
			cout << "Nome: " << participante[j].nome << endl;
			cout << "CPF: " << participante[j].cpf  << endl;
			cout << "Idade: " << participante[j].idade << endl;
		}
	}
	
	
	
	
	return 0;
}