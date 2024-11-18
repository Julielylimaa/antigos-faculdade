#include <iostream>

using namespace std;

//estrutura para armazenamento de dados na tabela
struct dado{
	int k; //chave
	int status; //0 = vazio //1 = ocupado
};

int hash_insert(dado t[], int m, int k){
    i <- 0;
    do{
        j <- h(k,i,m);
        if (T[j].status != 1){
            T[j].k <- k;
            T[j].status=1;
            return j;
		}
        else
            i <- i+1;
    }while (i!=m);
	return -1;

}
int main (){
	
	int mm;
	
	cin >> mm;
	dado T[20]
	
	
	
	
	return 0;
}