#include <bits/stdc++.h>

using namespace std;

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

vetor cria_vetor(ponto A,ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float distancia_Vetor(vetor A){
	
	float comprimento_Vetor;
	float x;
	x = pow(A.x, 2) + pow(A.y, 2);
	comprimento_Vetor = sqrt(x);
	return comprimento_Vetor;
	
}

int menor_distancia(ponto origem, ponto destinos[],int numpassageiros)
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
	
	return menor+1;
}
int menor_distancia2(ponto origem, ponto passageiros[], ponto destinos[], int numpassageiros)
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
	
	for(int i = 1; i < numpassageiros; i++)
	{
		distancias = cria_vetor(origem, passageiros[i]);
		comprimento = distancia_Vetor(distancias);
		if(comprimento < menordistancia)
		{
			menordistancia = comprimento;
			menor = i;
		}
	}
	
	return menor+1;
}

int passageiro_destino(ponto origem, ponto passageiros[], ponto destinos[], int numpassageiros)
{
	float menordistancia;
	int aux;
	int i = 0;
	vetor distancias;
	float comprimento;
	
	distancias = cria_vetor(origem, destinos[i]);
	comprimento = distancia_Vetor(distancias);
	menordistancia = comprimento;
	
	for(int i = 1; i < numpassageiros; i++)
	{
		distancias = cria_vetor(origem, destinos[i]);
		comprimento = distancia_Vetor(distancias);
		if(comprimento < menordistancia)
		{
			menordistancia = comprimento;
			aux = 2;
		}
	}
	
	for(int i = 1; i < numpassageiros; i++)
	{
		distancias = cria_vetor(origem, passageiros[i]);
		comprimento = distancia_Vetor(distancias);
		if(comprimento < menordistancia)
		{
			menordistancia = comprimento;
			aux = 1;
		}
	}
	
	return aux;
}

int main(){
	
	ponto origem;
	int num_passageiros;
	int i, j=1;
	int aux;
	int aux2;
	
	cout << "Entre com a posicao do carro inicial: " << endl;
	cin >> origem.x >> origem.y;
	
	cout << "Entre com o numero de passageiros: " << endl;
	cin >> num_passageiros;
	
	ponto coordenadas_passageiros[num_passageiros];
	ponto coordenadas_destinos[num_passageiros];
	ponto possiveisdestinos[num_passageiros];
	
	for(int n = 0; n < num_passageiros; n++)
	{
		possiveisdestinos[n].x = 10000;
		possiveisdestinos[n].y = 10000;
	}
	
	for(i = 0; i < num_passageiros; i++)
	{
		cout << "Entre com a posicao do passageiro " << i+1 << ": " << endl;
		cin >> coordenadas_passageiros[i].x >> coordenadas_passageiros[i].y;
		
		cout << "Entre com o destino do passageiro " << i+1 << ": " << endl;
		cin >> coordenadas_destinos[i].x >> coordenadas_destinos[i].y;
	}
	
	aux = menor_distancia(origem, coordenadas_passageiros, num_passageiros);
	cout << "motorista " << endl << "--> passageiro " << aux << endl;
	origem = coordenadas_passageiros[aux-1];
	coordenadas_passageiros[aux-1].x = 10000;
	coordenadas_passageiros[aux-1].y = 10000;
	possiveisdestinos[aux-1] = coordenadas_destinos[aux-1];
		
	int n = 1;
	
	while(n < num_passageiros*2)
	{
		if(passageiro_destino(origem, coordenadas_passageiros, possiveisdestinos, num_passageiros) == 1)
		{
			aux2 = menor_distancia(origem, coordenadas_passageiros, num_passageiros);
			cout << " --> passageiro " << aux2;
			origem = coordenadas_passageiros[aux2-1];
			coordenadas_passageiros[aux2-1].x = 10000;
			coordenadas_passageiros[aux2-1].y = 10000;
   			possiveisdestinos[aux2-1] = coordenadas_destinos[aux2-1];	
		}
		
		else
		{
			aux2 = menor_distancia2(origem, coordenadas_passageiros, possiveisdestinos, num_passageiros);
			cout << " --> destino do passageiro " << aux2 ;
			origem = coordenadas_destinos[aux2-1];
			possiveisdestinos[aux2-1].x = 10000;
		   	possiveisdestinos[aux2-1].y = 10000;
	    }	
	    n++;
	    cout << endl;
	}


	return 0;
}