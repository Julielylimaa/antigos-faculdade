#include <iostream>
#include <locale>

using namespace std;

//declara��o do struct que armazenar� os dados do veiculo
struct dadoscarro
{
	char placa[11];
	char renavam[12];
};
	

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	dadoscarro dados[11];
	
	
	int N, i, j; 
	
	do{
		cout << "Quantos ve�culos deseja cadastrar? (maximo 10) ";
		cin >> N;
	//numero de veiculos q serao cadastrados
	}while (N >10);
	
	
	cin.ignore();
	
	for (i = 0; i< N; i++){
		cout << "Placa: ";
		cin.getline(dados[i].placa, 11);
		cout << "Renavam: ";
		cin.getline (dados[i].renavam, 12);
	}
	
	for (j=0; j < N; j++){
		cout << "\nVe�culo " << j +1 << ":" << endl;
		cout << "Placa: " << dados[j].placa << endl;
		cout << "Renavam: " << dados[j].renavam << endl;
	}
	
	return 0;
}

