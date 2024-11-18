#include <iostream>

using namespace std;

int hash_aux(int k, int m){
	int hk = k % m;
	if (hk < 0)
		return hk + m;
	else 
		return hk;
}

int hash1(int k, int i, int m, int c1, int c2){
	int hk = hash_aux(k,m);
	int hk1;
	
	hk1 = (hk + (i*c1)+ (i*i*c2)) % m;
	
	if (hk1 < 0)
		return hk1 + m;
	else 
		return hk1;
}

int main(){

	int k; //chave que será inserida
	int m;//tamanho da tabela hash
	int c1, c2; 
	int i; //contador
	
	//entrada dos dados
	cin >> k;
	cin >> m;
	cin >> c1 >> c2;
	
	
	int tab; //variavel que vai chamar a função
	
	//saida das posiçoes da sondagem quadratica
	for(i =0; i < m; i++){
		tab = hash1(k,i,m,c1,c2);
		cout << tab << " ";
	}
	
	
	
	return 0;
}