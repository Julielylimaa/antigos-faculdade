#include <iostream>

using namespace std;

int hash_aux(int k, int m){
	int hk = k % m;
	if (hk < 0)
		return hk + m;
	else 
		return hk;
}

int hash1(int k, int i, int m){
	int hk = hash_aux(k,m);
	int hk1;
	
	hk1 = (hk + i) % m;
	
	if (hk1 < 0)
		return hk1 + m;
	else 
		return hk1;
}

struct dado{
	int k; //valor da chave
	int status; // 1 se estiver ocupada 
	//0 se estiver vazia
};

int hash_insert(dado t[], int m, int k){
	
	int i = 0;
	
	do {
		int j = hash1(k,i,m);
		if (t[j].status != 1)//se estiver vazia
		{
			t[j].k = k; //passa a armazenar a chave
			t[j].status = 1; //status muda para ocupada
			return j;
		}
		else 
			i = i+1;
	} while (i!= m);
	
	return -1;
}
int hash_search(dado t[], int m, int k){
	int i = 0;
	int j;
	
	do{
		j = hash1(k,i,m);
		if (t[j].k == k)
			return j;
		
		i++;
	}while(t[j].status !=0 || i < m);
	
	return -1;
}

int main(){
	int m;
	int k; //chave a ser inserida na tabela
	int buscar; //chave q vai ser buscada 
	
	cin >> m;
	
	//inicializando a tabela
	
	dado t[100];
	for (int i=0; i <m; i++){
		t[i].k = -1;
		t[i].status = 0; //deixando todas as posiçoes vazias
	}

	cin >> k;
	while (k!= 0){
		hash_insert(t,m,k);
		cin >> k;
	}
	
	cin >> buscar;
	
	//resultado da busca 
	int res = hash_search(t,m,buscar);
	

	
	if (res != -1)
		cout << "Chave " << buscar << " encontrada na posicao " << res << endl;
	
	else
		cout << "Chave " << buscar << " nao encontrada" << endl;
	
	
	return 0;
}