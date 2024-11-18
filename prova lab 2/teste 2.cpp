#include <iostream>
#include <iomanip>

using namespace std;

struct produto{
	char nome[50];
	float preco;
	int quantidade;
};

int main (){
	int N; //quantidade de produtos que serão cadastrados
	int indice; //mostra a posiçao do vetor que o produto comprado se encontra
	float soma =0; //somará o valor total da compra
	int somaprodutos = 0;
 
	
	cin >> N;
	
	produto cadastro[50];
	
	for (int i = 0; i < N; i++){
		cin.ignore();
		cin.getline(cadastro[i].nome, 50);
		cin >> cadastro[i].preco;
		
		
		
		cin >> cadastro[i].quantidade;
	}
	
	cin >> indice;
	
	while(indice != -1){
		if (cadastro[indice].quantidade != 0){
				cadastro[indice].quantidade-= 1;
				soma += cadastro[indice].preco;
		}
		
		cin >> indice;
		
	}
	
	for (int j = 0; j < N; j++){
		somaprodutos += cadastro[j].quantidade;
	}
	
	
	cout << fixed << setprecision(2);
	cout << "Total da compra: R$ " << soma << endl;
	cout << "Produtos restantes: " << somaprodutos << endl;
	return 0;
}