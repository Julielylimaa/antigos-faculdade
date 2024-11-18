#include <iostream>

using namespace std;

struct dado{
	int codigo;
	float preco;
};

int main (){
	dado *produto; //ponteiro para uma struct
	int tam;//tamanho do vetor
	int i;//contador
	
	//ler o tamanho desejado para o vetor
	cin >> tam;
	
	//Alocação de memoria para um novo produto
	produto = new dado[tam];
	
	
	//ler os elementos do vetor
	for (i=0; i< tam; i++){
		cin >> produto[i].codigo; //quando a struct é ponteiro utiliza ->
		cin >> produto[i].preco;
	}
	
	//Mostrar dados inseridos
	for (i=0; i< tam; i++){
		cout << "Codigo: " << produto[i].codigo << endl;
		cout << "Preco: " << produto[i].preco << endl;
	}
	
	//Liberar memória
	delete [] produto;
	
	
	return 0;
}