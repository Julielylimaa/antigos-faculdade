#include<iostream>

using namespace std;



int main(){
    int *v = NULL; // armazena os dados    
	int N; // tamanho desejado para o vetor    
	int i; // contador    
	int *p; // ponteiro aux para leitura e escrita    
	int total =0; //variavel que vai somar quantos elementos sao pares e positivos
	int par; //variavel aux para verificar se o elemento é par
	
	
	
	// Ler o tamanho desejado para o vetor    
    cin >> N;
    // Alocar memoria para o vetor    
	
	
	v = new int [N];
    
	
	
	p = v;
    for(i=0;i<N;i++)
    {
        cin >> *p;
        
        par = *p%2;
        
        if (*p >0 && par ==0){
			total++;
		}
		
        p++;
    }
  
    
	cout << total << endl;
	
	
	delete [] v;
    return 0;
}