#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void rabin_karp(char T[], char P[], int tamT, int tamP, int d, int q)
{
	int cont = 0;
	int posicao = -1;
	int h; // valor utilizado para calculo de hash
	int p = 0; // padrao convertido para inteiro
	int t = 0; // texto convertido para inteiro

	for(int i = 0; i < tamP; i++)
	{
		p = (d * p + (P[i]-'a')) % q; // converte o padrao
		t = (d * t + (T[i]-'a')) % q; // converte o texto para o primeiro valor (t0)
	}
	
	h = (int)pow(d, tamP - 1) % q; // utilizado para calculo de hash
	
	for(int i = 0; i <= tamT - tamP; i++)
	{
		if(p == t) // Se encontrei um valor de hash valido
		{
			// Verifico se ha diferencas
			int j;
			for(j = 0; j < tamP; j++)
			{
				if(P[j] != T[i + j])
				{
					break;
				}
			}

			if(j == tamP)
			{
				cont++;
				posicao = i;
			}
		}

		if(i < tamT - tamP) // se ainda nao cheguei no final
		{
			t = (d * ( t - (T[i]-'a') * h ) + (T[i + tamP]-'a')) % q; // atualizo o ti para ti+1
			if(t < 0) t += q;
		}
	}
	
	if(posicao == -1)
		cout << "0 ocorrencia(s)" << endl;
	else
	{
		cout << "Ultima ocorrencia: " << posicao << endl;
		cout << cont << " ocorrencia(s)" << endl;
	}
}

int main()
{
	int N;
	int M;
	char texto[100];
	char padrao[100];

	// quantidade de caracteres diferentes utilizados
	int d;
	// número primo para calcular os valores no hash
	int q;

	return 0;
}





