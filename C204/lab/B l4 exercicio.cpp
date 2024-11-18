#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void rabin_karpSoma(char T[], char P[], int tamT, int tamP, int d, int q, int &soma)
{
	int cont = 0;
	int posicao = -1;
	int h; // valor utilizado para calculo de hash
	int p = 0; // padrao convertido para inteiro
	int t = 0; // texto convertido para inteiro

	for(int i = 0; i < tamP; i++)
	{
		p = (d * p + (P[i]-'0')) % q; // converte o padrao
		t = (d * t + (T[i]-'0')) % q; // converte o texto para o primeiro valor (t0)
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
			t = (d * ( t - (T[i]-'0') * h ) + (T[i + tamP]-'0')) % q; // atualizo o ti para ti+1
			if(t < 0) t += q;
		}
	}
	
	if(posicao != -1)
		soma ++;
}


int main(){
	int n; //quantidade telefones
	cin >> n;
	
	char telefone[12];
	char padrao[2];
	
	padrao[0] = '4';
	padrao[1] = '2';
	
	// quantidade de caracteres diferentes utilizados
	int d = 10;
	// número primo para calcular os valores no hash
	int q = 13;
	
	int soma =0; //soma de ocorrencias
	for (int i = 0; i <n; i++){
		cin >> telefone;
		rabin_karpSoma(telefone,padrao,11,2,d,q,soma);
	}
	
	cout << soma << endl;
	
	return 0;
}