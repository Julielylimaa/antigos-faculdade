#include <iostream>
#include <iomanip>

using namespace std;


int main (){
	int N; // programa vai ler N numeros
	int i; // parametro for 
	int x; // numero que sera analisado a quantidade de vezes que foi digitado
	float porx; // porcentagem de vezes que x foi digitado
	int somax = 0; // numero de vezes que x foi digitado
	
	int vetor[51];
	
	cin >> N;
	
	for (i = 0; i < N; i++){
		cin >> vetor[i]; //vai adicionar os componentes do vetor
	}
	
	cin >> x;
	
	for (i = 0; i < N; i++){
		 //vai analisar todos os componentes
		if (vetor[i]== x){
			somax ++; // se o componente for igual a x será somado 1 na variavel
		}
			
	}
	
	porx = somax * 100 / (N * 1.0);
	
	cout << fixed << setprecision(2);
	
	cout << porx << endl;
	
	
	
	return 0;
}