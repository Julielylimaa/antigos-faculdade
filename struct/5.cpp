#include <iostream>
#include <iomanip>


using namespace std;

struct dado{
	char nome[50];
	int matricula;
	float nota;
};

int main (){
	
	dado dados[100];
	
	int N, J;
	int i;
	double somanotas = 0, media;
	int menornota = 0;
	int savek; 
	
	
	cin >> N >> J;
	
	
	
	for (i = 0; i < N; i++){
		cin.ignore();
		cin.getline(dados[i].nome, 50);
		cin >> dados[i].matricula;
		cin >> dados[i].nota;
		
		somanotas+= dados[i].nota;
		
		if(dados[menornota].nota > dados[i].nota)
			 menornota = i;
	}
	
	media = somanotas/ (N*1.0);
	
	cout << fixed << setprecision(2);
	cout << "Media: " << media << endl;
	cout << dados[menornota].nome << endl;
	cout << dados[J - 1].nome << " " << dados[J - 1].matricula << " " << dados[J - 1].nota << endl;
	
	
	
	return 0;
}