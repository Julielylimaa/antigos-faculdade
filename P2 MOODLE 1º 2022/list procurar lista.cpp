#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x){
	
	list<int>::iterator p;
	int achou = 0;
	
	for(p = lista.begin(); p!= lista.end(); p++){
		if(*p == x)
			achou =1;
	}
	
	if (achou ==1)
		return true;
	else 
		return false;
	
	
}

int main(){
	
	list<int>lista;
	int n; //var aux para leitura
	int x; //numero que será buscado
	bool result;
	
	
	//entrada de dados
	cin >> n;
	while(n!=0){
		lista.push_back(n);
		cin >> n;
	}
	
	cin >> x;
	
	result = encontrar(lista,x);
	
	if (result == true){
		cout << "Encontrado" << endl;
	}
	else 
		cout << "Nao encontrado" << endl;

	
	
	return 0;
}