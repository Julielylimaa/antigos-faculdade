//fun��o para colocar numeros de um vetor em ordem

void insercaoDireta(int vetor[], int tamanho){
	int i, j; //contadores
	
	int chave;//guardar valores
	
	for (j = 1; j < tamanho; j++){
		//for vai rodar o vetor inteiro come�ando pelo 2� elemento
		chave = vetor[j]; //a chave vai ser o 2� elemento do vetor
		
		i = j -1; //i vai ser a posi��o anterior de j
		while (i >= 0 && vetor[i] > chave){
			//enquanto o vetor na pos i for maior que o vetor guardado
			vetor[i+1] = vetor[i]; //o vetor da posi��o de cima passa a ser i
			i = i-1;
		}
		
		vetor[i+1] = chave;
	}
}