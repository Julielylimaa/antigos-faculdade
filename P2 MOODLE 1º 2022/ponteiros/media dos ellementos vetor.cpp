#include<iostream>
#include <iomanip>

using namespace std;



int main(){
    int *v = NULL; // armazena os dados    
	int N; // tamanho desejado para o vetor    
	int i; // contador    
	int *p; // ponteiro aux para leitura e escrita    
	int soma =0; //variavel aux para calculo da media
	float media;
	
	
	// Ler o tamanho desejado para o vetor    
    cin >> N;
    // Alocar memoria para o vetor    
	
	
	v = new int [N];
    
	
	
	p = v;
    for(i=0;i<N;i++)
    {
        cin >> *p;
        p++;
    }
    // Mostrar o vetor    
	
	p = v;
    for(i=0;i<N;i++)
    {
        soma = soma + *p;
        p++;
    }
    
    media = soma /(N * 1.0);
    
    
    cout << fixed << setprecision(2) << media <<endl;
	
	
	delete [] v;
    return 0;
}