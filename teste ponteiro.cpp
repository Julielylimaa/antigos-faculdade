#include <iostream>
#include <cstring>

using namespace std;


int main (){
	char *ponteiro;
	char string[] = "Joao pedro";
	char *vetor[100];
	int i=0;
	
	ponteiro = strtok(string, " ");
	
	while (ponteiro != NULL){
		vetor[i] = ponteiro;
		ponteiro = strtok (NULL, " ");
		i++;
		
	}
	
	for (int j = 0; j < i; j++)
		cout << vetor[j] << endl;
	
	
	
	
	return 0;
}