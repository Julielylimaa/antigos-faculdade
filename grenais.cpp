#include <iostream>

using namespace std;

int main (){
	int golinter, golgremio;
	int N, grenais = 0;
	int vitinter =0, vitgremio = 0;
	int empate = 0;
	
	
	
	do{
		cin >> golinter >> golgremio;
		
		if (golinter > golgremio){
			vitinter ++;
		}
		else if (golinter < golgremio){
			vitgremio++;
		}
		else if (golinter == golgremio){
			empate++;
		}
		
		grenais ++;
		
	   	cout << "Novo grenal? (1-sim 2-nao) ";
		cin >> N;
			
	}while (N == 1);
	
	cout << grenais << " grenais" << endl;
	cout << "Inter: " << vitinter << endl;
	cout << "Gremio: " << vitgremio << endl;
	cout << "Empates: " << empate << endl;
	
	if (vitinter > vitgremio){
		cout << "Inter venceu mais" << endl;
	}
	else if (vitinter < vitgremio){
		cout << "Gremio venceu mais" << endl;
	}
	else 
		cout << "Nao houve vencedor" << endl;
	
	return 0;
}