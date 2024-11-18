#include <iostream>

//exemplo aluno

using namespace std;

struct aluno{
	char nome[20];
	float notas[10]; // vetor que irá salvar n notas desse aluno
	int n; // quantidade de notas que serão armazenadas
	float media;
};

int main (){
	aluno dados;
	
	cin.getline(dados.nome, 20);
	cin >> dados.n;
	
	int i; // parametro for
	float soma = 0; //para calcular a media 
	
	for (i= 0; i < dados.n; i++){
		cin >> dados.notas[i];
		soma += dados.notas[i];
	}
	
	dados.media = soma/ dados.n;
	
	
	cout << "Nome: " << dados.nome << endl;
	cout << "Media: " << dados.media << endl;
	
	
	
	
	return 0;
}