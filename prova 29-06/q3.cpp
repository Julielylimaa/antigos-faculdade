#include <iostream>
#include <iomanip>

using namespace std;

struct dados{
	char nome[41];
	float peso;
	float preco;
};

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int N; //número de barracas cadastradas 
	
	dados barraca[51]; //vetor da struct 
	
	do{
		cout << "Quantas barracas serão cadastradas? ";
		cin >> N;
	}while (N < 0 || N > 50);
	
	
	for (int i = 0; i < N; i++){
		//entrada de dados do vetor 
		cout << "Nome: ";
		cin.ignore();
		cin.getline (barraca[i].nome,41);
		cout << "Peso: ";
		cin >> barraca[i].peso;
		cout << "Preço: ";
		cin >> barraca[i].preco;
	}
	
	float soma = 0;
	float media;
	
	
	for (int i = 0; i < N; i++){
		soma += barraca[i].preco;

	}
	
	media = soma / (N * 1.0);
	
	cout << fixed << setprecision (2);
	
	cout << "Preço medio: R$ " << media << endl;
	
	cout << "Barracas com preço abaixo da média: "<< endl;
	
	for (int i = 0; i < N; i++){
		if (barraca[i].preco < media){
			cout << barraca[i].nome << endl;
		}
	}
	
	return 0;
}
	