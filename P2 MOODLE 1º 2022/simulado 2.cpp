#include <iostream>
#include <list>

using namespace std;

void maiorMenor(list<int> lista, int &menor, int &maior){
    int x;
    
	while(!lista.empty()){
	    x = *lista.begin();
	    if (x > maior){
	        maior = x;
	    }
	    if (x < menor){
	        menor = x;
	    }
	    
	    lista.pop_front();
	} 
	
	cout << "menor: " << menor << endl;
	cout << "maior: " << maior << endl;
}

int main(){
	
	list<int>lista;
	int n; //var aux para leitura
    int maior, menor;
	
	//entrada de dados
	cin >> n;

	while(n!=0){
		lista.push_back(n);
		cin >> n;
	}
	
    maior =-10000;
    menor = 10000;
	maiorMenor(lista, menor, maior);


	
	
	return 0;
}