#include <iostream>

using namespace std;


int main (){
	setlocale (LC_ALL, "Portuguese");
		
	int N, i; // determinar o valor do vetor
	int A[10]; 
	int X;// variavel que sera procurada no vetor
	int pertence = 0;
	
	do{
		cout << "Digite o valor de N: ";
		cin >> N;
		
	}while (N>10); //caso o usuario de um valor de N >0 ser� pedido o valor novamente
	
	for (i=0; i < N; i++){
		cin >> A[i]; //entrada dos valores em cada posi��o
	}
	
	cout << "Digite o valor de x: ";
	cin >> X;
	
	for (i=0; i < N; i++){
		if (A[i] == X){
			pertence++; 
			//somar� 1 a variavel caso o valor na posi�ao i tenha valor X
			// se nao tiverem numeros iguais a X a variavel ter� valor 0
		}
	}
	if (pertence > 0)
		cout << "Valor pertence ao vetor" << endl;
	else 
		cout << "Valor n�o pertence ao vetor" << endl;


	return 0;
}