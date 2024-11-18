#include<iostream>

using namespace std;



int main(){
    int *v = NULL; // armazena os dados    
	int N; // tamanho desejado para o vetor    
	int i; // contador    
	int *p; // ponteiro aux para leitura e escrita    
	
	
	
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
        cout << *p << " ";
        p++;
    }
    cout << endl;
	
	
	delete [] v;
    return 0;
}