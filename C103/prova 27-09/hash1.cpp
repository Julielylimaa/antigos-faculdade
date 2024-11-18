#include <iostream>

using namespace std;

//dados da tabela hash
struct dado{
	int k; //valor da chave
	int status; // 1 se estiver ocupada 
	//0 se estiver vazia
};

//funções da sondagem quadratica
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

//função que insere os elementos na tabela
int hash_insert(dado t[], int m, int k, int c1, int c2){
	
	int i = 0;
	
	do {
		int j = hash1(k,i,m,c1,c2);
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

int main (){
	int m;//tamanho da tabela
	int C1, C2;
	int k;//chave 
	
	//inicializando a tabela 
	dado t[100];
	for (int i=0; i <m; i++){
		t[i].k = -1;
		t[i].status = 0; //deixando todas as posiçoes vazias
	}
	
	//entrada de dados
	cin >> m;
	cin >> C1;
	cin >> C2;
	
	//entrada das chaves a serem inseridas
	cin >> k;
	while (k!= -1){
		hash_insert(t,m,k, C1, C2);
		cin >> k;
	}
	
	//saida dos elementos da tabela 
	for (int j=0; j <m; j++){
		cout << t[j].k << " ";
	}
	
	
	return 0;
}