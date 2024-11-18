#include <iostream>
#include <list>

using namespace std;

int main (){
	list<int> fila; //ponteiro para declarar a fila
	int x; //var aux para leitura dos dados
	
	//ler dados e inserir na pilha 
	fila.push_back(2); //insere o elemento
	fila.push_back(1);
	fila.push_back(3);
	
	//remover os dados da pilha e ir mostrando
	while(!fil.empty()){
		x= *fila.begin();
		cout << x << endl;
		fila.pop_front();//tira o elemento
	}
	
	
	
	return 0;	
}