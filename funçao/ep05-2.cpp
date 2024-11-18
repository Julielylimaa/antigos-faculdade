#include <iostream>

using namespace std;

int FAT( int N){
	//mult representa a multiplicação do fatorial
	int mult;
	int i;
	
	mult = N;
	
	for (i=1; i< N; i++){
		mult = mult * i;
	}
	
	
	return mult;
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, fatorial;
	do{
		cout << "Digite o valor de N: ";
		cin >> N;
	} while (N < 0);
	
	if (N == 0)
		fatorial = 1;
	//fatorial de 0 é igual a 1
	
	else
		fatorial = FAT(N);
	
	cout << "N! = " << fatorial << endl;

	return 0;
}