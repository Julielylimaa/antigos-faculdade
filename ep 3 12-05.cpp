#include <iostream>


using namespace std;


int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int N, i; // tamanho do vetor
	int A[10];
	int X;
	int pertence = 0;
	
	
	do{
		cout << "Digite o valor de N: ";
		cin >> N;
		
	}while (N>10);
	
	for (i=0; i < N; i++){
		cin >> A[i]; //entrada dos valores em cada posi��o
	}
	cout << "Digite o valor de X: ";
	cin >> X;
	
	cout << "X: " << X << endl;
	
	for (i=0; i < N; i++){
		if (A[i] == X)
			pertence++;  
	}
	
	if (pertence > 0) //se o valor X estiver dentro do vetor
	{
		cout << "Posi��o no vetor: ";
		for (i=0; i < N; i++){
			if (A[i] == X)
				cout << i << " "; // saida da(s) posi��o(�es) que X est� 
			
		}
	}
	else 
		cout << "Valor n�o encontrado no vetor" << endl;

	
	
	return 0;
}