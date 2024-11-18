#include <bits/stdc++.h>

using namespace std;

struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

vetor cria_vetor(ponto A, ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}
float distancia_Vetor(vetor A)
{

	float comprimento_Vetor;
	float x;
	x = pow(A.x, 2) + pow(A.y, 2);
	comprimento_Vetor = sqrt(x);
	return comprimento_Vetor;

}

int main ()
{
	ponto coordenadas[100];
	int capacidade = 0; //cada carro consegue levar apenas 4 passageiros
	vetor dist_passageiro;
	float dist[100][100]; //armazena distancia de um ponto para outro

	//considerando a coordenada do carro como origem (0,0);
	coordenadas[capacidade].x = 0;
	coordenadas[capacidade].y = 0;
	capacidade++;




	//entrada de dados dos passageiros
	cout << "Localização dos passageiros e seus destinos: " << endl;
	while (capacidade <= 8)
	{
		cin >> coordenadas[capacidade].x >> coordenadas[capacidade].y;
		capacidade++;
	}

	for(int i = 0; i < capacidade; i++)
	{
		for(int j = i + 1; j < capacidade; j++)
		{
			dist_passageiro = cria_vetor(coordenadas[i], coordenadas[j]);
			dist [i][j] = distancia_Vetor(dist_passageiro);
			cout << dist[i][j]<< endl;
		}
		

	}
	bool passou[100];


	return 0;
}
