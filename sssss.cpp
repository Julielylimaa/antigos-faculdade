#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;


int main (){
	char nome[100];
	char flag[] = "SAIR";
	int matricula;
	float NP1, NP2, somanotas = 0;
	float media;
	int i = 0;
	float mediageral = 0;
	float maior = 0; //maior media
	float menor = 100;// menor media
	
	
	
	
	
	cin.getline(nome, 100);
	
	if (strcmp(nome, flag)== 0){
		cout << "Programa Finalizado" << endl;
	}
	
	else {
		while (strcmp(nome, flag)!= 0)
		{
			cin >> matricula;
			cin >> NP1; 
			cin >> NP2;
		
			somanotas = NP1 + NP2;
	
			media = somanotas/ 2 * 1.0;
	
			if (media > maior)
				maior = media;
		
			if (media < menor)
				menor = media;
		
			mediageral += media;
	
			cout << "Aluno: " << nome << endl;
			cout << "Mat: " << matricula << endl;
			cout << fixed << setprecision(2);
			cout << "Media: " << media << endl;
	
			i++;
			cin.ignore();
			cin.getline(nome, 100);
		}
		
		cout << fixed << setprecision(2);
	
		cout<< "Media Geral: " << mediageral/i << endl;
		cout << "Maior media: " << maior << endl;
		cout << "Menor media: " << menor << endl;
		
		
	}
	
	
	
	
	
	return 0;
}