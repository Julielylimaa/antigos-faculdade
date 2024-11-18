#include <iostream>
#include <fstream>

using namespace std;

struct arq{
	int num;
	int tempo;
	int prioridade;	
};
int main (){
	
	arq dados[6];
	
	for (int i = 0; i < 5; i++){
		cin >> dados[i].num;
		cin >> dados[i].tempo;
		cin >> dados[i].prioridade;
	}
	
	
	for (int j = 1; j <= 5; j++){
		
		for (int z = 0; z<5; z++){
			if (dados[z].prioridade == j){
				cout << "P" << dados[z].num;
				for (int x = 1; x <= dados[z].tempo; x++){
					cout << "-";
				}
			}
			
		}
	}
	
	
		for (int i = 0; i < 5; i++){
			
		}
		
	
	return 0;
}
