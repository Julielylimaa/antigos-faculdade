#include <iostream>
#include <list>

using namespace std;


int main(){
	
	list<int>estoque;
	list<int> venda;
	list<int>::iterator p;
	
	int N; //numero de elementos inseridos
	int operacao; //operacao = 1--> colocar codigo no estoque
				//operacao = 2 --> pegar do estoque e colocar pra venda
	int codigo;//codigo do produto
	int aux; //var aux para trocar de venda para estoque
	
	cin >> N;
	
	for(int i = 0; i <N; i++){
		cin >> operacao;
		if (operacao == 1){
			cin >> codigo;
			estoque.push_back(codigo);
		}
		if (operacao == 2){
			aux = *estoque.begin();
			estoque.pop_front();
			venda.push_front(aux);
		}
	}
	
	for (p = estoque.begin(); p!= estoque.end(); p++){
		cout << "Estoque: " << *p << endl;
	}
	
	cout << "Venda: ";
	for (p = venda.begin(); p!= venda.end(); p++){
		cout << *p << " ";
	}
	return 0;
}