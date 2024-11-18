#include <bits/stdc++.h>

using namespace std;

// struct usada para declarar os pontos para forma��o dos vetores
struct ponto
{
	float x;
	float y;
};
typedef ponto vetor;

// struct usada para criar as retas com os pontos
struct reta
{
	ponto A;
	ponto B;
};
typedef reta segmento;

// fun��o usada para criar o vetor
vetor cria_vetor(ponto A, ponto B)
{
	vetor AB;
	
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	
	return AB;
}

// fun��o que retorna o comprimento do vetor
float distancia_Vetor(vetor A)
{
	float comprimento_Vetor;
	float x;
	
	x = pow(A.x, 2) + pow(A.y, 2);
	comprimento_Vetor = sqrt(x);
	
	return comprimento_Vetor;
}

// fun��o que retorna o ponto com a menor dist�ncia de outro ponto origem 
int menor_distancia(ponto origem, ponto destinos[], int numpassageiros)
{
	float menordistancia; // guarda o valor da menor dist�ncia
	int menor; // guarda o ponto com a menor disnt�ncia
	int i = 0; // vari�vel auxiliar
	vetor distancias; // guarda os vetores que ser�o criados para encontrar a menor dist�ncia
	float comprimento; // guarda o comprimento dos vetores 

	// atribuindo valores iniciais para as vari�veis 
	distancias = cria_vetor(origem, destinos[i]);
	comprimento = distancia_Vetor(distancias);
	menordistancia = comprimento;
	menor = i;
	
	// percorrendo o vetor de destinos 
	for(int i = 1; i < numpassageiros; i++)
	{
		distancias = cria_vetor(origem, destinos[i]);
		comprimento = distancia_Vetor(distancias);
		
		// comparando as dist�ncias para encontrar a menor
		if(comprimento < menordistancia)
		{
			menordistancia = comprimento;
			menor = i;
		}
	}
	
	// retornando o ponto com a menor dist�ncia 
	return menor + 1;
}

int main()
{
	ponto origem; // ponto que armazena as posi��es do motorista ao longo do percurso 
	int num_passageiros; // armazena o n�mero de poss�veis passageiros na regi�o
	int aux; // vari�vel auxiliar 
	int npassageiro[3]; // armazena a ordem de busca dos passageiros 

	// entrando com a posi��o inicial do motorista
	cout << "Entre com a posicao do carro inicial: " << endl;
	cin >> origem.x >> origem.y;

	// entrando com o n�mero de poss�veis passageiros na regi�o
	cout << "Entre com o numero de possiveis passageiros proximos: " << endl;
	cin >> num_passageiros;

	ponto coordenadas_passageiros[num_passageiros]; // armazena a posi��o dos poss�veis passageiros
	ponto coordenadaspassageiros2[3]; // armazrna a posi��o dos passageiros selecionados para a viagem
	ponto coordenadas_destinos[3]; // armazena a posi��o dos destinos dos passageiros selecionados 

	// entrando com a posi��o dos poss�veis passageiros
	for(int i = 0; i < num_passageiros; i++)
	{
		cout << "Entre com a posicao do passageiro " << i + 1 << ": " << endl;
		cin >> coordenadas_passageiros[i].x >> coordenadas_passageiros[i].y;
	}

	// calculando quais os 3 passageiros mais pr�ximos do motorista e mostrando quais s�o eles
	cout << endl << "passageiros selecionados: ";
	for(int z = 0; z < 3; z++)
	{
		// encontrando o passageiro mais pr�ximo e mostrando ele
		aux = menor_distancia(origem, coordenadas_passageiros, num_passageiros);
		cout << aux << " ";
		
		// guardando a posi��o do passageiro
		coordenadaspassageiros2[z].x = coordenadas_passageiros[aux].x;
		coordenadaspassageiros2[z].y = coordenadas_passageiros[aux].y;
		
		// atribuindo um valor alto para a posi��o do passageiro encontrado para ele n�o ser selecionado novamente na fun��o
		coordenadas_passageiros[aux - 1].x = 10000;
		coordenadas_passageiros[aux - 1].y = 10000;
		
		// guardando quais os passageiros selecionados 
		npassageiro[z] = aux; 
	}
	
 	cout << endl << endl;
 	
 	// entrando com o destino dos passageiros selecionados 
 	for(int x = 0; x < 3; x++)
	{
		cout << "Entre com o destino do passageiro " << npassageiro[x] << ": " << endl;
		cin >> coordenadas_destinos[x].x >> coordenadas_destinos[x].y;
	}
	
	// calculando o melhor trajeto para pegar os passageiros e mostrando ele
	cout << endl << "motorista " << endl;
	for(int f = 0; f < 3; f++)
	{
		// achando o passageiro com a menor dist�ncia da origem
		aux = menor_distancia(origem, coordenadaspassageiros2, 3);
	
		// mostrando qual � o passageiro
		cout << " --> passageiro " << npassageiro[aux-1] << endl;
		
		// definindo a posi��o do passageiro como origem
		origem = coordenadaspassageiros2[aux - 1];
		
		// atribuindo um valor alto para a posi��o do passageiro para ele n�o ser selecionado novamente na fun��o
		coordenadaspassageiros2[aux - 1].x = 10000;
		coordenadaspassageiros2[aux - 1].y = 10000;
	}
	
	// calculando o melhor trajeto para deixar os passageiros nos destinos e mostrando ele
	cout << endl << "indo para os destinos" << endl << endl;
	for(int z = 0; z < 3; z++)
	{
		// achando o destino com a menor dist�ncia da origem
		aux = menor_distancia(origem, coordenadas_destinos, 3);
	
		// mostrando qual � o destino
		cout << " --> destino do passageiro " << npassageiro[aux-1] << endl;
		
		// definindo a posi��o do destino como origem
		origem = coordenadas_destinos[aux - 1];
		
		// atribuindo um valor alto para a posi��o do destino para ele n�o ser selecionado novamente na fun��o
		coordenadas_destinos[aux - 1].x = 10000;
		coordenadas_destinos[aux - 1].y = 10000;
	}

	return 0;
}
