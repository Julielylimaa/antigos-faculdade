#include <iostream>
#include <list>

using namespace std;

//Fun�ao da lista
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
	//X: valor de compara��o
	int N, R, X;
	
	//inserir numeros
	cin >> N;
	while (N!= 0){
		lista.push_front(N);
		cin >> N;
	}
	
	
	//inserir valor de compara�ao
	cin >> X;
	
	//chamada da fun�ao
	R = nAbaixo(lista, X);
	
	cout << R << endl;
	
	//desaloca�ao da memoria
	while (!lista.empty()){
		lista.pop_front();
	}
	
	
	return 0;
}