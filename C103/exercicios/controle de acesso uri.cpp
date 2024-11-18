#include <iostream>

using namespace std;

//struct q armazenará dados da tabela 
struct dado{
	int k; //valor da chave
	int status; // 0-vazio, 1-ocupado, 2-removido
	
};

//funçoes da sondagem double hash
int h1(int k, int m){ 
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

int hash3(int k, int m, int i){
	int h3;
	
	h3 = (h1(k,m) + (i *h2(k,m))) % m;
	
	if (h3 < 0)
		return h3+m;
	else 
		return h3;
}

//função que irá inserir elementos na tabela 
int hash_insert(dado t[], int m, int k){
	
	int i = 0;
	
	do {
		int j = hash3(k,m,i);
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

//função que buscará elementos na tabela
int hash_search(dado t[], int m, int k){
	int i = 0;
	int j;
	
	do{
		j = hash3(k,m,i);
		if (t[j].k == k)
			return j;
		
		i++;
	}while(t[j].status !=0 || i < m);
	
	return -1;
}


//função que removerá elementos da tabela
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

int main(){
		
	int M;//tamanho da tabela
	int k; //chave a ser inserida na tabela
	int x; //chave q vai ser buscada 
	
	cin >> M;
	
	//inicializando a tabela
	
	dado t[100];
	for (int i=0; i <= M; i++){
		t[i].k = -1;
		t[i].status = 0; //deixando todas as posiçoes vazias
	}

	//entrada de dados na tabela
	cin >> k;
	while (k!= 0){
		hash_insert(t,M,k);
		cin >>k;
	}
	
	//entrada do valor que será buscado
	cin >> x;
	
	int remove;//variavel que vai chamar a função de remoçao
	
	remove = hash_remove(t,M,x);
 
	//saida dos dados da tabela
	for (int i = 0; i < M; i++){
		cout << t[i].k << " ";
	}
	
	return 0;
}