#include <iostream>
#include <list>

using namespace std;

int main (){
	list<int> primeira; 
	list<int> segunda;
	list <int> unir;
	list<int> uniao;
	
	list<int>::iterator i;
	list<int>::iterator j;
	list<int>::iterator x;
	list<int>::iterator aux;
	
	int N; //var aux para colocar os elementos na lista
	
	
	//entrada de dados
	cin >> N;
	
	while (N!=0){
		primeira.push_back(N);
		cin >> N;
	}
	
	cin >> N;
	while (N!=0){
		segunda.push_back(N);
		cin >> N;
	}
	
	//unindo as duas em ordem crescente sem retirar repetidos
	i = primeira.begin();
	j = segunda.begin();
	
	while (i != primeira.end() && j!= segunda.end()){
		if (*i <= *j){
			unir.push_back(*i);
			unir.push_back(*j);
		}
		if (*i > *j){
			unir.push_back(*j);
			unir.push_back(*i);
		}
		
		i++;
		j++;
	}
	
	//variavel auxiliar para retirar os repetidos
	aux = unir.begin();
	aux++;
	
	for (x = unir.begin(); x!=unir.end(); x++){
		uniao.push_back(*x);//insere o primeiro elemento
		if (*x ==*aux){
			uniao.pop_front();
		}
		aux++;//aux passa a ser o proximo
		
		
	}
	for (x = uniao.begin(); x!=uniao.end(); x++){
		cout << *x << " ";
		
	}
	
	return 0;
}