#include <iostream>
#include <list>

using namespace std;

int main (){
	list<int> lista; //declara a lista 
	int x;
	int i; //contador 
	int N; //numeros que serao inseridos na lista
	
	//entrada de dados na lista
	//pilha: entra os dados na frente (front)
	for(i=0; i<4; i++){
		cin >> N;
		lista.push_front(N);
	}
		
	while(!lista.empty()) //enquanto a lista nao estiver vazia
	{
		x = *lista.begin(); //primeiro elemento da lista
		cout << x << " ";
		lista.pop_front(); //remove o primeiro elemento da lista
	}   	
	
	
	return 0;
}