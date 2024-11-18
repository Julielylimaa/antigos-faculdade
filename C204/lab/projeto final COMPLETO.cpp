#include <bits/stdc++.h>

using namespace std;

//struct usada para declarar os pontos para formação dos vetores
struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

struct reta
{
	ponto A;
	ponto B;
};
typedef reta segmento;

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

int menor_distancia(ponto origem, ponto destinos[], int numpassageiros)
{
	float menordistancia;
	int menor;
	int i = 0;
	vetor distancias;
	float comprimento;

	distancias = cria_vetor(origem, destinos[i]);
	comprimento = distancia_Vetor(distancias);
	menordistancia = comprimento;
	menor = i;

	for(int i = 1; i < numpassageiros; i++)
	{
		distancias = cria_vetor(origem, destinos[i]);
		comprimento = distancia_Vetor(distancias);
		if(comprimento < menordistancia)
		{
			menordistancia = comprimento;
			menor = i;
		}
	}

	return menor + 1;
}

int main()
{

	ponto origem;
	int num_passageiros;
	int j = 1;
	int aux;
	int aux2;
	int npassageiro[3];
	int ndestino[3];

	cout << "Entre com a posicao do carro inicial: " << endl;
	cin >> origem.x >> origem.y;

	cout << "Entre com o numero de possiveis passageiros proximos: " << endl;
	cin >> num_passageiros;

	ponto coordenadas_passageiros[num_passageiros];
	ponto coordenadaspassageiros2[3];
	ponto coordenadas_destinos[3];
	ponto possiveisdestinos[3];

	for(int n = 0; n < 3; n++)
	{
		possiveisdestinos[n].x = 10000;
		possiveisdestinos[n].y = 10000;
	}

	for(int i = 0; i < num_passageiros; i++)
	{
		cout << "Entre com a posicao do passageiro " << i + 1 << ": " << endl;
		cin >> coordenadas_passageiros[i].x >> coordenadas_passageiros[i].y;
	}

	cout << endl << "passageiros selecionados: ";

	for(int z = 0; z < 3; z++)
	{
		aux = menor_distancia(origem, coordenadas_passageiros, num_passageiros);
		cout << aux << " ";
		coordenadaspassageiros2[z].x = coordenadas_passageiros[aux].x;
		coordenadaspassageiros2[z].y = coordenadas_passageiros[aux].y;
		coordenadas_passageiros[aux - 1].x = 10000;
		coordenadas_passageiros[aux - 1].y = 10000;
		npassageiro[z] = aux;
	}
	
 	cout << endl << endl;
 	
 	for(int x = 0; x < 3; x++)
	{
		cout << "Entre com o destino do passageiro " << npassageiro[x] << ": " << endl;
		cin >> coordenadas_destinos[x].x >> coordenadas_destinos[x].y;
	}
	
	cout << "motorista " << endl;

	for(int k = 0; k < 3; k++)
	{
		cout << " --> passageiro " << npassageiro[k] << endl;
	}

	cout << "indo para os destinos" << endl;
	
	for(int z = 0; z < 3; z++)
	{
		aux = menor_distancia(origem, coordenadas_destinos, 3);
		coordenadas_destinos[aux-1].x = 10000;
		coordenadas_destinos[aux-1].y = 10000;
		ndestino[z] = npassageiro[aux-1];
	}
	
	for(int g = 0; g < 3; g++)
	{
		cout << " --> destino do passageiro " << ndestino[g] << endl;
	}

	return 0;
}
