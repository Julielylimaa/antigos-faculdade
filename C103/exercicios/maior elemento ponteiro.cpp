#include<iostream>

using namespace std;



int main(){
    int *v = NULL; // armazena os dados    
	int N; // tamanho desejado para o vetor    
	int i; // contador    
	int *p; // ponteiro aux para leitura e escrita    
	int maior; //variavel que vai salvar o maior elemento do vetor
	
	
	
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
   
    maior = v[0];
    
	p = v;
	
    for(i=0;i<N;i++)
    {
        if(v[i] > maior){
			maior = v[i];
		}
    }
    cout << maior << endl;
	
	
	delete [] v;
    return 0;
}