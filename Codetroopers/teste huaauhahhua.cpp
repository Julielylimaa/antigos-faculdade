#include <bits/stdc++.h>

using namespace std;

int main (){
	char riso[51];
	char vogais[51]; //para salvar só as vogais
	
	for (int i = 0; i<51; i++){
		vogais[i]= ' ';
	}
	cin >> riso;
	
	int j = 0;
	for (int i = 0; i <strlen(riso); i++){
		if (riso[i] == 'a' || riso[i] == 'e' || riso[i] == 'i'|| riso[i] == 'o'|| riso[i] == 'u'){
			vogais[j] = riso[i];
			j++;
		}
	}
	
	char contrario[j-1];
	int x = 0;
	for (int i = j-1; i >=0; i--){
		contrario[x] = vogais[i];
		x++;
		
	}
	if (strcmp(vogais,contrario) ==0){
		
	}
	return 0;
}