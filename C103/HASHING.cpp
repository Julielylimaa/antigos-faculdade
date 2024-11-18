//HASHING
//É uma função que mapeia chaves para numeros inteiros
//utilizada para fazer buscas de maneira rapida

//funçoes hash: mapeiam uma chave k qualquer em um dos m slots 
//disponiveis na tabela hash
//função hash: h(k) = k mod m >>>> k % m

int hash_aux(int k, int m){
	int hk = k % m;
	if (hk < 0)
		return hk + m;
	else 
		return hk;
}

//se h(k) retornar um numero negativo soma m a ele

//em alguns casos, pode haver colisão (quando h(k) tem o msm valor para
//k diferentes), e o algoritmo tentará colocar 2 dados na mesma posição
//Para resolver a colisão é utilizado um metodo chamado 'endereçamento aberto'

//a solução se baseia em encontrar outra posição disponivel na tabela
//esse processo de encontrar uma posição disponivel é chamado de sondagem

//TIPOS DE SONDAGEM: 
//linear
//quadratica
//double hashing 

//******SONDAGEM LINEAR*******

//h'(k) = k mod m
//h(k,i,m) = (h'(k) + i) mod m
    //i representa o numero de tentativas começando no slot 0 (0, 1, 2, 3, ..., m-1)
    //representa o numero de slots disponiveis
    //k representa a chave 

int hash1(int k, int i, int m){
	int hk = hash_aux(k,m);
	int hk1;
	
	hk1 = (hk + i) % m;
	
	if (hk1 < 0)
		return hk1 + m;
	else 
		return hk1;
}

//*********INSERINDO ELEMENTOS NA TABELA HASH **********

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

//************** BUSCA NA TABELA HASH***********

int hash_search(struct1 t[], int k, int m){
	i = 0;
	
	do{
		j = hash1(k,i,m);
		if (t[j].k ==k)
			return j;
		
		i++;
	}while(t[j].status !=0 || i < m);
	
	return -1;
}

//***********DELETANDO ELEMENTO NA TABELA HASH************

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



