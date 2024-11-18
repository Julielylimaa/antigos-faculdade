#include <bits/stdc++.h>
using namespace std;

int main()
{
	int np, nc, f; //numero de paineis
	//numero de caminhoes
	//frete

	int n; //numero de testes
	cin >> n;
	int valor;//valor total final
	
	while(n--)
	{
		cin >> np >> nc >> f;

		//v[np] = vetor q armazena peso dos paineis
		int v[np], baixo = 0, alto = 0, resp;
		for (int i = 0; i < np; i++)
		{
			cin >> v[i];
			baixo = max(baixo, v[i]); //MAIOR ELEMENTO
			alto += v[i]; //soma
		}

		while (!(alto < baixo))
		{
			int meio = (baixo + alto) / 2; //limite de peso atual
			int acc = 0; //peso do caminhao atual
			int ctc = 1; //contagem de caminhoes necessarios

			for (int i = 0; i < np; i++)
			{
				acc += v[i];
				if (acc > meio)
				{
					ctc++;
					acc = v[i];
				}
			}

			if (ctc > nc)  //nao deu
			{
				baixo = meio + 1; //testa com mais
			}
			else   //DEU
			{
				resp = meio; //SALVA E TESTA COM Menos
				alto  = meio - 1;
			}
		}

		cout << resp << " ";
		valor = resp * nc * f;
		cout << "$" << valor << endl;
	}
	return 0;
}
