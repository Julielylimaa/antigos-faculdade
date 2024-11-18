#include <iostream>

using namespace std;

struct dado
{
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};

int h1(int k, int m){
	int hk = k % m;
	if (hk < 0)
		return hk + m;
	else 
		return hk;
}

int h2 (int k, int m){ //
	int hk1;
	
	hk1 = 1 + (k%(m-1));
	
	if (hk1 <0)
		return hk1+ m;
	else 
		return hk1;
}

int hash3(int k, int i, int m){
	int h3;
	
	h3 = (h1(k,m) + (i *h2(k,m))) % m;
	
	if (h3 < 0)
		return h3+m;
	else 
		return h3;
}



int hash_insert(dado t[], int m, int k){
	
	int i = 0;
	
	do {
		int j = hash3(k,i,m);
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

int hash_search(dado t[], int k, int m){
	int i, j;
	i = 0;
	
	do{
		j = hash3(k,i,m);
		if (t[j].k == k)
			return j;
		
		i++;
	}while(t[j].status !=0 || i < m);
	
	return -1;
}

int hash_remove(dado t[], int m, int k){
	int j;
    j = hash_search(t,k,m);
    if(j != -1){
       t[j].status = 2;
       t[j].k = -1;
       return 0; // consegui remover
	 }
    else
       return -1; // k nao esta na tabela
}

int main (){
	int m; //tamanho da tabela
	int opcao;//opção escolhida pelo usuario 
	//1-inserir  2 - pesquisar  3-remover  4-listar a tabela 
	
	int k; //chave 
	dado t[100]; //vetor que vai armazenar a tabela
	
	
	//inicializando a tabela
	for (int i=0; i <m; i++){
		t[i].k = -1;
		t[i].status = 0; //deixando todas as posiçoes vazias
	}
	
	cin >> m;
	cin >> opcao;
	
	while (opcao != 5){
		
		//switch que ira direcionar o algoritmo para a opçao escolhida
		switch(opcao){
			case 1:
				//inserir k na tabela hash
				cin >> k;
				int inserir;
				inserir = hash_insert(t,m,k);
				break;
			case 2:
				//buscar k na tabela hash
				cin >> k;
				int pesquisar;
				pesquisar = hash_search(t,k,m);
				cout << pesquisar << endl;
				break;
			case 3:
				//remover k da tabela hash
				cin >> k;
				int remover;
				remover = hash_remove(t,m,k);
				break;
			case 4:
				//saida dos elementos da tabela
				for(int i = 0; i<m; i++){
					cout << t[i].k << " ";
				}
				break;
		}
		
		cin >> opcao;	
	}
	

	return 0;
}
