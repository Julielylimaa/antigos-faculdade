#include <iostream>

using namespace std;

struct dado
{
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};
int h(int k, int i, int m){
	
}


int hash_search(dado t[], int m, int k){
	int i, j, h;
	
    i <- 0;
    do{
        j <- h(k,i,m);
        if (t[j].k = k)
            return j;
        i <- i+1;
    }while (t[j].status!=0 and i<m);
    return -1;
}

int hash_remove(dado t[], int m, int k){
	int j;
    j = HASH_SEARCH(t,m,k);
    if(j != -1){
       t[j].status = 2;
       t[j].k = -1;
       return 0; // consegui remover
	 }
    else
       return -1; // k nao esta na tabela
}

int main (){
	
	int tam = 0;
	int valores[50], i = 0, y; //valores das chaves inseridas
	int chave;
	
	int m;//tamanho da tabela
	
	int tab[50];
	
	cin >> m;
	
	cin >> y;
	
	while (y != 0 || tam <= m){
		valores[i] = y;
		i++;
		tam++;
		cin >> y;
	}
	
	cin >> chave;
	
	for (int z=0; z <m; z++){
		tab[z] = valores[z];
	}
	
	int rem;
	rem = hash_remove(tab[],m, chave);
	
	for (i = 0; i <m; i++){
		cout << tab[i] << " ";
	}
	
	
	return 0;
}