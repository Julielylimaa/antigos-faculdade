//Revisão para prova

//*********BUSCANDO EM VETORES ***********

//1: ALGORITMO DE PESQUISA

int sequencial(int vet[], int tam, int x)
{
	bool achou = false;
	int i = 0; //contador 
	
	while (achou == false && i < tam){
		achou = vet[i++] == x; //achou vai ser vdd quando o x for encontrado
		//i++: faz primeiro com o valor de i e dps incrementa
		//++i: incrementa primeiro
		
		//achou vai ser verdade se o vetor na posição
		//i for igual a x (i++ vai somando ate chegar na ultima pos)
	}
	if (achou) //se achou == true vai retornar a posição
		return (i -1); 
//i -1 pois assim q fizer a analise ele ja incrementa
	else //se nao achou retorna -1
		return -1;
		
	
}

//Esse algoritmo retornará -1 se x nao pertencer a sequencia
//entao na main cria um if para a função







//2: BUSCA BINARIA
//condição para funcionar: o vetor deve estar em ordem crescente 
//divide o vetor no meio e busca na metade que sabe q o numero vai estar



int binaria(int vetor[],int tamanho, int x){
	bool achou = false; //nao achou o id
	
	int menor = 0; //menor posição do vetor
	int maior = tamanho-1; //maior posição do vetor
	//maior vai seguir de acordo com onde o vetor for dividido
	int meio;
	
	
	
	while (menor <= maior && achou == false)
		//enquanto nao rodar o vetor inteiro e nao achar x
	{
		meio = (menor + maior)/ 2; //vai separar o vetor em 2
		
		if (x < vetor[meio])
		//se x for menor que o elemento que está no meio 
		{
			maior = meio - 1;//o maior elemento passa a ser o do meio -1 
		}
		else 
			if (x > vetor[meio])
			//se x for maior que o elemento que está no meio
				menor = meio + 1; 
				//o menor passa a ser o meio +1
		
			else 
				achou = true; 
				//se o numero que está na posição do meio for igual a x
			
	}
	
	if (achou){
		return meio;
	}
	else 
		return -1;
}
 
 
 //**************ORDENANDO VETORES**************
 
 // 1: INSERTION SORT
 
 //usado para colocar o vetor em ordem, crescente ou decrescente
 
 void InsertionSort(int vetor[], int tam){
	int i, j; //contadores
	
	int chave;//guardar valores
	
	for (j = 1; j < tam; j++){
		//for vai rodar o vetor inteiro começando pelo 2º elemento
		chave = vetor[j]; //a chave vai ser o 2º elemento do vetor
		
		i = j -1; //i vai ser a posição anterior de j
		while (i >= 0 && vetor[i] > chave)//ou < para decrescente
		{
			//enquanto o vetor na pos i for menor que o vetor guardado
			vetor[i+1] = vetor[i]; //o vetor da posição de cima passa a ser i
			i = i-1;
		}
		
		vetor[i+1] = chave; //aq a chave estará armazenando o menor numero 
		//encontrado durante essa busca
	}
}
 
 //2: BUBBLE SORT
 
 void bubbleSort(int vetor[], int tam){
	int i, j; //contadores
	
	int trab; //variavel que vai salvar os valores que devem ser trocados
	bool troca; 
	int limite;
	
	troca = true;
	limite = tam - 1;
	
	while (troca){
		troca = false;
		for (i = 0; i < limite; i++){
			if (vetor[i] > vetor[i+1]){
				trab = vetor[i]; 
				vetor[i] = vetor[i+1];
				vetor[i+1] = trab;
				j=i;
				troca = true;
			}
		}
		limite = j; //j vai diminuindo de 1 em 1 ate chegar em 0
		//vai rodar n vezes ate acabar 
		
	}	

}

//3: QUICK SORT
//a estrategia é: para resolver um problema fica mais facil dividir em problemas
//menores
//utiliza um elemento pivô: elemento do meio (n/2)
//após dividir o vetor, define duas variaveis (esquerda e direita) q
//irao analisar os dois pedaços, procurando os elementos que estão 
//no lado errado >>maiores que o pivô ficam na direita e menores na esquerda
//quando as duas variaveis encontram elementos errados, elas trocam seus valores 

void quickSort (int vetor[], int tamanho, int i,int j){
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor [(int)round ((esq + dir)/2.0)]; 
	//round é uma função que arredonda
	
	do{
		while (vetor[esq]<pivo) //significa que esta no lugar certo
			esq++; //muda para a proxima posição
		while (vetor[dir]>pivo)//significa que esta no lugar certo
			dir--;//muda para a proxima posição
		
		if (esq<= dir){
			trab = vetor[esq];//armazena o valor q esta no esq
			vetor[esq]= vetor[dir];//atribui um novo valor para esq
			vetor[dir]= trab; //atribui o valor antigo de esq para dir
		
			esq++;
			dir--;
			
		}
	}while (esq<=dir);
	if (dir - i >=0)
		quickSort(vetor,tamanho,i,dir); //algoritmo recursivo
	//chama quicksort da direita
	
	if (j - esq >=0)
		quickSort (vetor,tamanho,esq,j);
	//chama quickSort da esquerda 
}

 
//***************ALGORITMO RECURSIVO*****************
//nao da pra prever quanto de memoria vai gastar
//usado para problemas q possuem estrutura recursiva
//ex de estrutura recursiva: fatorial
//percorre uma lista de numeros q sempre irao subtrair 1 do anterior

//funçao de algoritmo recursivo: 

int fatorial (int n){
	if (n== 0 || n==1)
		return 1; //fatorial de 1 ou 0 é = 1 
	else 
		return n * fatorial(n-1); // vai rodar a funçao ate chegar no fat de 1
	//no final irá multiplicar todos os n-1s 
	
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 