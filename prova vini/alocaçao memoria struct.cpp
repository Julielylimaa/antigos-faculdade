#include <iostream>

using namespace std;

struct dado{
	int codigo;
	float preco;
};

int main (){
	dado *produto; //ponteiro para uma struct
	
	//Aloca��o de memoria para um novo produto
	produto = new dado;
	
	//Inserir os dados
	produto->codigo=1; //quando a struct � ponteiro utiliza ->
	produto->preco = 1.50;
	
	//Mostrar dados inseridos
	cout << "Codigo: " << produto->codigo << endl;
	cout << "Preco: " << produto->preco << endl;
	
	//Liberar mem�ria
	delete produto;
	
	
	return 0;
}