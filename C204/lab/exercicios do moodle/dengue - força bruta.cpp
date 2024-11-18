#include <iostream> // Entrada e sa?da
#include <climits> // INT_MAX
#include <algorithm> // next_permutation
using namespace std;

int main()
{
	int custo[100][100]; 
	int n; // numero de locais
	int local_inicial;

	
	cin >> n;


	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++)
		{
			
			cin >> custo[i][j];
			custo[j][i] = custo[i][j];
		}
	}
	
	cin >> local_inicial;
	
	int v[100]; // vetor com as cidades a serem permutadas
	int p; // var. auxiliar
	int menor_custo; // menor custo da viagem
	int custo_caminho; // custo do caminho

	// colocando os locais que serao permutadas no vetor (todas exceto a inicial)
	p = 0;
	for(int i = 0; i < n; i++)
		if(i != local_inicial)
		{
			v[p] = i;
			p++;
		}

	// forca bruta
	menor_custo = INT_MAX; // inicializo o custo com infinito
	do
	{
		

		custo_caminho = custo[local_inicial][v[0]];

		for(int i = 0; i < n - 2; i++) // somar custo de v[0]->v[1]->v[2]...v[n-3]->v[n-2]
			custo_caminho += custo[v[i]][v[i + 1]];

		custo_caminho += custo[v[n - 2]][local_inicial]; // custo v[n-2] -> cidade inicial

		menor_custo = min(menor_custo, custo_caminho);
	}
	while(next_permutation(v, v + (n - 1))); 
	
	cout << menor_custo << endl;

	return 0;
}