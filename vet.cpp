#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int N;
	int i;
	int vetor[100];
	int soma = 0;
	float media;
	int maior;
	
	
	cin >> N;
	
	
	
	
	for (i = 0; i < N; i++){
		cin >> vetor[i];
		soma += vetor[i];
		
	}

	media = soma /(N *1.0);
	
	
	cout << fixed << setprecision(2) << media << endl;
	cout << "Maiores que a media: ";
	
	for (i=0; i < N; i++){
		if (vetor[i] > media)
			cout << vetor[i] << " ";
	}
	
	
	return 0;
}