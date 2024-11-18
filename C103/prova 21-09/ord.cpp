#include <iostream>
#include <cmath>


using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
{
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];
    do
    {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    }
    while (esq <= dir);
    if (dir - i >= 0)
        quickSort(vetor, tamanho, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, tamanho, esq, j);
}


int main (){
	int vetor[50]; //vetor que vai armazenar os numeros de entrada
	int tam = 0; //contador do tamanho do vetor
	int a; //numeros que serão armazenados no vetor
	
	cin >> a;
	
	//entrada de dados do vetor
	while (a != -1){
				vetor[tam] = a; 
		tam++;
		cin >> a;
	}
	
	int i = 0; //representa esquerda no quicksort
	int j = tam -1; //representa direita no quicksort
	   	
	//chama a função que vai ordenar o vetor
	quickSort(vetor,tam, i, j);
	
	//saida dos elementos do vetor
	for (i=0; i<tam; i++)
		cout << vetor[i] << " ";
	
	
	return 0;
}