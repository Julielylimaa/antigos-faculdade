#include <iostream>

using namespace std;

int acimaMedia(int *vetor, int N){
    int nElementos = 0; //numero de elementos acima da media
    int *p; //ponteiro para varrer o vetor
    float media;
    int soma = 0;
    p = vetor;
    int i; //contador
    
    
    for(i=0;i<N;i++)
    {
        soma = soma + *p;
        p++;
    }
    
    media  = soma /(N * 1.0);
 
    p = vetor;
    for (i = 0; i < N; i++){
        if (*p > media){
            nElementos++;
        }
        p++;
    }
    
    return nElementos;
}

int main(){
    
    int N; //tamanho do vetor
    int *x; //elementos que serao adicionados no vetor
    int *v = NULL; 
    int i; //contador
    
    int resultado; //variavel q chama a função
    
    //entrada de tamanho do vetor
    cin >> N;
    
    //alocando memoria para o vetor
    v = new int [N];
    
	
	
	x = v;
    for(i=0;i<N;i++)
    {
        cin >> *x;
        x++;
    }
    
    resultado = acimaMedia(v,N);
    
    cout << resultado << " elementos acima da media" << endl;

    delete[]v;
    
    
    return 0;
}