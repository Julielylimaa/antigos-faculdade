#include <bits/stdc++.h>

using namespace std;

int main (){
	string riso;
	string vogais; //para salvar só as vogais
	string contrario;

	cin >> riso;
	
	int j = 0;
	int tamanho = riso.size();
	for (int i = 0; i < tamanho; i++){
		if (riso[i] == 'a'){
			vogais[j] = riso[i];
			j++;
		}
		if ( riso[i] == 'e'){
			vogais[j] = riso[i];
			j++;
		}
		if (riso[i] == 'i'){
			vogais[j] = riso[i];
			j++;
		}
		if (riso[i] == 'o'){
			vogais[j] = riso[i];
			j++;
		}
		if (riso[i] == 'u'){
			vogais[j] = riso[i];
			j++;
		}
	}
	
	cout << vogais << endl;
	
	int x = j-1;
	for (int i = 0; i <j; i++){
		contrario[x] = vogais[i];
		x--;
	}
	cout << contrario << endl;
	int aux = 0;
	
	if (aux == 0){
		cout << "S" << endl;
	}
	else 
		cout << "N" << endl;
	return 0;
}