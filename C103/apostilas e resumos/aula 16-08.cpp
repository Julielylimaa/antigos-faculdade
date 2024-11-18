//função para colocar numeros de um vetor em ordem

void insercaoDireta(int vetor[], int tamanho){
	int i, j; //contadores
	
	int chave;//guardar valores
	
	for (j = 1; j < tamanho; j++){
		//for vai rodar o vetor inteiro começando pelo 2º elemento
		chave = vetor[j]; //a chave vai ser o 2º elemento do vetor
		
		i = j -1; //i vai ser a posição anterior de j
		while (i >= 0 && vetor[i] > chave){
			//enquanto o vetor na pos i for maior que o vetor guardado
			vetor[i+1] = vetor[i]; //o vetor da posição de cima passa a ser i
			i = i-1;
		}
		
		vetor[i+1] = chave;
	}
}