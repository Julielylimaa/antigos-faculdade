#include <iostream>

using namespace std;

//fun��o recursiva
int elevar(int k, int n){
	if (n==0)
		return 1;
	else 
		return k * elevar(k, n-1);
}

//fun��o principal 
int main (){
	int k; 
	int n;
	
	//entrada de dados
	cin >> k;//base
	cin >> n;//expoente
	
	//chamando a fun��o
	int potencia;
	potencia = elevar(k,n);
	
	
	//sa�da do resultado
	cout << potencia<< endl;
	
	return 0;
}