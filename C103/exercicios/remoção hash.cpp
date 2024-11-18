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
	int status; // 0-vazio, 1-ocupado, 2-removido
	
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
int hash_remove(dado t[], int m, int k){
	int j; //variavel que armazena o resultado da busca
	j = hash_search(t,m,k);
	
	if (j!= -1){
		t[j].status =2;
		t[j].k = -1;
		return 0; //se retornar zero conseguiu remover
	}
	else 
		return -1; //se retornar -1 k nao estava na tabela 
}

int main (){
	
	int m;//tamanho da tabela
	int k; //chave a ser inserida na tabela
	int buscar; //chave q vai ser buscada 
	
	cin >> m;
	
	//inicializando a tabela
	
	dado t[100];
	for (int i=0; i <m; i++){
		t[i].k = -1;
		t[i].status = 0; //deixando todas as posiçoes vazias
	}

	//entrada de dados na tabela
	cin >> k;
	while (k!= 0){
		hash_insert(t,m,k);
		cin >> k;
	}
	
	//entrada do valor que será buscado
	cin >> buscar;
	
	int remove;//variavel que vai chamar a função de remoçao
	
	remove = hash_remove(t,m,buscar);
	
	//saida dos dados da tabela
	for (int i = 0; i <m; i++){
		cout << t[i].k << " ";
	}
	
	return 0;
}