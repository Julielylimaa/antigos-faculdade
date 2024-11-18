#include <iostream>
#include <cstring>


using namespace std;


int main (){
	char x[50];
	char *ponteiro;
	char *palavra1[50];
	char *palavra2[50];
	int i;
	char x;
	
	cin.getline(x,50);
	
	ponteiro = strtok(x, " ");
	
	while (ponteiro != NULL){
		palavra1[i] = ponteiro;
		ponteiro = strtok (NULL, " ");
		i++;
	}
	
	x = strlen(palavra1);
	
	for (i = 0; i < x; i++){
		cout << palavra1[i] << endl;
	}
	
	
	
	
	return 0;
}