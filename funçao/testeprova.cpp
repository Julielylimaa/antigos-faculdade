#include <iostream>

using namespace std;

struct pessoa{
	char nome [100];
	int idade;
};

int main (){
	
	pessoa info[100];
	int n; //numero de pessoas que serão cadastradas
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin.ignore();
		cin.getline (info[i].nome,100);
		cin >> info[i].idade;
	}
	
		for (int i = 0; i < n; i++){
			cout << info[i].nome << endl;
			cout << info[i].idade << endl;
	}
	
	return 0;
}