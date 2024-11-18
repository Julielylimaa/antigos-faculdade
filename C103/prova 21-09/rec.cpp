#include <iostream>

using namespace std;

int comb(int n, int k){
	
	if (k ==1)
		return n;
	else 
		if (k == n)
			return 1;
		else 
			return comb(n-1, k-1)+ comb(n-1, k);
}

int main (){
	int n; //numero de pessoas total
	int k; //numero de pessoas em cada grupo
	
	//entrada de dados
	cin >> n;
	cin >> k;
	
	int combinacao; //variavel que vai armazenar o resultado da funçao
	
	combinacao = comb(n,k);
	
	//saida do resultado da combinação
	cout << combinacao << endl;
	
	
	
	return 0;
}