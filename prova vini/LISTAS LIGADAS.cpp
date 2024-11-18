#include <iostream>
#include <list>

using namespace std;

int main (){
	list<int> pilha; //ponteiro para declarar a pilha
	int x; //var aux para leitura dos dados
	
	//ler dados e inserir na pilha 
	pilha.push_front(2); //insere o elemento
	pilha.push_front(1);
	pilha.push_front(3);
	
	//remover os dados da pilha e ir mostrando
	while(!pilha.empty()){
		x= *pilha.begin();
		cout << x << endl;
		pilha.pop_front();//tira o elemento
	}
	
	
	
	return 0;	
}