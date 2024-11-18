#include <iostream>
#include <list>

using namespace std;

//Funçao da lista
int nAbaixo(list<int> lista, int X){
	int F; //contagem de numeros menores
	list <int>::iterator p;
	
	for (p = lista.begin(); p != lista.end(); p++){
		if (*p < X){
			F++;
		}
	}
	return F;
}

int main (){
	
	list <int> lista; //ponteiro da fila 
	//N: numeros serao inseridos
	//R: resposta
	//X: valor de comparação
	int N, R, X;
	
	//inserir numeros
	cin >> N;
	while (N!= 0){
		lista.push_front(N);
		cin >> N;
	}
	
	
	//inserir valor de comparaçao
	cin >> X;
	
	//chamada da funçao
	R = nAbaixo(lista, X);
	
	cout << R << endl;
	
	//desalocaçao da memoria
	while (!lista.empty()){
		lista.pop_front();
	}
	
	
	return 0;
}