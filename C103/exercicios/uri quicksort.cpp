#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
struct dados
{
    int codigo; // codigo do produto
    int quantidade; // quantidade em estoque
    float preco; // preco unitario
};

void quickSort (dados vetor[], int tamanho, int i,int j){
	int  esq, dir, pivo;
	esq = i;
	dir = j;
	dados trab;//variavel aux p/ trocar elementos do vetor de lugar 
	pivo = vetor [(int)round ((esq + dir)/2.0)].codigo; 
	//round é uma função que arredonda
	
	do{
		while (vetor[esq].codigo < pivo) //significa que esta no lugar certo
			esq++; //muda para a proxima posição
		while (vetor[dir].codigo >pivo)//significa que esta no lugar certo
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
int main (){
	dados vet[100]; //vetor que vai armazenar as entradas de dados
	int N; //numero de produtos cadastrados
	
	cin >> N;
	
	for(int z=0; z <N; z++){
		cin >> vet[z].codigo;
		cin >> vet[z].quantidade;
		cin >> vet[z].preco;
	
	}
	int i = 0;
	int j = N-1;
	
	quickSort(vet, N, i, j);
	
	
	
	for(int a=0; a <N; a++){
		cout << "Codigo: " << vet[a].codigo << endl;
		cout << "Quantidade em estoque: " << vet[a].quantidade << endl;
		cout << fixed << setprecision(2)<< "Preco unitario: R$ " << vet[a].preco << endl;
		cout << endl;
	}
	
	
	
	return 0;
}