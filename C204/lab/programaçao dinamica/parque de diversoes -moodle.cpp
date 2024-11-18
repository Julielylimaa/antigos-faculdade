#include <iostream> 

using namespace std;

struct brinquedos
{
	int R; // nota do brinquedo
	int D; //duraçao do brinquedo
};

int main()
{
	int pd[100][200]; 	// valor maximo sendo:
						// olhando do item 'i'->final
						// olhando uma mochila de capacidade 'j'
						
	int caminho[100][200]; 	// utilizado para recuperar quais itens foram escolhidos
							// 0 -> nao pegar o item
							// 1 -> pegar o item
							
	int N; // quantidade de brinquedos no parque
	int T; //tempo total disponivel 
	brinquedos v[100]; // vetor de brinquedos

	// ENTRADA:
	
	

	//entrada do tempo disponivel 
	cin >> T; 
	
	//entrada do numero de brinquedos no parque
	cin >> N;
	
	
	//entrada do tempo de duraçao e das notas de cada brinquedo
	for(int i=0; i<N; i++)
	{
		cin >> v[i].D >> v[i].R; 
	}
	
	// CASO BASE:
	// olhando do ultimo item para frente, val. maximo = 0
	for(int j = 0; j <= T; j++)
		pd[N][j] = 0;

	// olhando tendo uma mochila de capacidade 0, o val. maximo=0
	for(int i = 0; i <= N; i++)
		pd[i][0] = 0;
	
	
	// CASO GERAL
	for(int i = N - 1; i >= 0; i--)
		for(int j = 1; j <= T; j++)
		{
			int pega, npega; // val. para caso eu pegar ou nao pegar o item 'i'
			
			npega = pd[i + 1][j]; // olhar o proximo item, mantendo a capacidade 'j'

			if(j >= v[i].D) // se eu tiver capacidade disponivel p/ pegar o item 'i'
				pega = pd[i + 1][j - v[i].D] + v[i].R;
			// olho o proximo item, subtraio o peso da capacidade
			// disponivel, e somo o valor do item 'i'
			else
				pega = 0; // se nao posso pegar, o valor eh 0

			
			
			if(pega > npega) // se valer a pena pegar
			{
				pd[i][j] = pega;
				caminho[i][j] = 1;
			}
			
			else // se valer a pena nao pegar
			{
				pd[i][j] = npega;
				caminho[i][j] = 0;
			}
		}

	// observando do item 0->final
	// uma mochila de capacidade igual a 'capacidade'
	cout << pd[0][T] << endl;
	
	
	return 0;
}