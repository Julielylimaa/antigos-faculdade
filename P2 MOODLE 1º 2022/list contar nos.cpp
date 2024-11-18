#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista){
	
	list<int>::iterator p;
	
	int c=0;
	
	for(p = lista.begin(); p!= lista.end(); p++){
		c++;
	}	

	return c;
}

int main(){
	
	list<int>lista;
	int x; //var aux para leitura
	int resultado;
	
	//entrada de dados
	cin >> x;
	while(x!=0){
		lista.push_back(x);
		cin >> x;
	}
	
	//chamando a funçao
	resultado = contar(lista);
	
	//mostrando o resultado
	cout << resultado << endl;
	
	
	return 0;
}