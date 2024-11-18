#include <iostream>

using namespace std;

//função recursiva
int elevar(int k, int n){
	if (n==0)
		return 1;
	else 
		return k * elevar(k, n-1);
}

//função principal 
int main (){
	int k; 
	int n;
	
	//entrada de dados
	cin >> k;//base
	cin >> n;//expoente
	
	//chamando a função
	int potencia;
	potencia = elevar(k,n);
	
	
	//saída do resultado
	cout << potencia<< endl;
	
	return 0;
}