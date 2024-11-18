#include <iostream>


using namespace std;

int h1(int k, int m){ //hash_aux
	if (k%m < 0)
		return (k%m) + m;
	else
		return k%m;
}

int h2 (int k, int m){ //
	int hk1;
	
	hk1 = 1 + (k%(m-1));
	
	if (hk1 <0)
		return hk1+ m;
	else 
		return hk1;
}

int hash1(int k, int m, int i){
	int h3;
	
	h3 = (h1(k,m) + (i *h2(k,m))) % m;
	
	if (h3 < 0)
		return h3+m;
	else 
		return h3;
}

int main (){
	
	int k;//chave a ser inserida
	int m;//tamanho da tabela
	int i; //contador de tentativas
	
	//entrada de dados
	cin >> k >> m;
	
	int res; //variavel que vai armazenar os elementos da tabela
	
	//saida de dados
	for (i=0;i<m;i++){
		res = hash1(k,m,i);
		cout << res << " ";
	}
	
	
	return 0;
}