#include <bits/stdc++.h>
using namespace std;

struct desembaralho{
	char resposta[101];	
};
int main ()
{

	char frase[101];
	int n;
	
	
	cin >> n;
	int tam[n];
	desembaralho final[n];
	
	cin.ignore();

	for (int x = 0; x < n; x++)
	{
		cin.getline(frase, 100);
		

		
		tam[x] = strlen(frase);
		int esq = (tam[x] / 2) - 1;
		int dir = tam [x]- 1;

		int aux = 0;
		for (int i = esq; i >= 0; i--)
		{
			final[x].resposta[aux]= frase[i];
			aux ++;
		}
		aux = esq+1;
		for (int i = dir; i > esq; i--)
		{
			final[x].resposta[aux]= frase[i];
			aux++;
		}

	}
	
	for (int i =0; i < n; i++){
		
		for (int j =0; j < tam[i]; j++)
			cout << final[i].resposta[j];
		cout << endl;
	}

	return 0;
}
