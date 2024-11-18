#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
struct dados
{
	int nome;
	int tempo;
	int prioridade;

};
int main()
{
	char nomeARQ[50];
	int x = 0;
	int i, j;
	int soma = 0;
	double media;
	int pri;
	int aux;
	int s = 0;
	dados resultado[10];
	ifstream arq;


	cin.getline(nomeARQ, 50);
	arq.open(nomeARQ, ifstream::in);

	while(!arq.eof())
	{

		arq >> resultado[x].nome >> resultado[x].tempo >> resultado[x].prioridade;
		x++;
	}
	arq.close();
	aux = 1;
	for(i = x; i >= 0; i--)
	{
		if(resultado[i].prioridade == aux)
		{
			pri = i;
			cout << "P" << resultado[pri].nome;
			for(j = 0; j < resultado[pri].tempo; j++)
			{
				cout << '-';
				s +=1;
			}
			soma = s + soma;
			if(aux == x)
				soma = soma - s;
			i = x;
			aux += 1;
		}
	}

	media = 1.00 * soma / x;
	cout << endl;
	cout << fixed << setprecision(1);
	cout << "Tempo medio de espera: " << media << "ms" << endl;

	arq.close();
	return 0;
}
