#include <iostream>
#include <iomanip>


using namespace std;

struct notas{
	int n1, n2, n3, n4;
	float media;
};

int main (){
	notas *vetor;//declarando vetor como ponteiro
	int N; //tamanho do vetor
	float mediaturma = 0; 
	
	cin >> N;
	//declarando vetor com tamanho N;
	vetor = new notas[N];
	
	for(int i=0; i < N; i++){
		cin >> vetor[i].n1 >> vetor[i].n2 >> vetor[i].n3 >> vetor[i].n4;
		vetor[i]. media = (vetor[i].n1+vetor[i].n2+vetor[i].n3+vetor[i].n4)/4.0;
	}
	
	for (int i = 0; i <N;i++){
		mediaturma += vetor[i].media;
	}
	
	mediaturma = mediaturma/N;
	
	
	cout << fixed << setprecision(2)<< mediaturma << endl;
	return 0;
}