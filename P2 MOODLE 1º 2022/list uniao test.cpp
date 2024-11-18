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

	
	
	for (x = primeira.begin(); x!=primeira.end(); x++){
		cout << *x << " ";	
	}
	
	for (x = segunda.begin(); x!=segunda.end(); x++){
		cout << *x << " ";
		
	}
	
	return 0;
}