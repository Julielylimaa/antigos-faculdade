#include <bits/stdc++.h>

using namespace std;

struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};

typedef treenode* treenodeptr;

void tInsere(treenodeptr &p, int x)
{
	if(p == NULL)
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}

	else if(x < p->info)
		tInsere(p->esq, x);

	else
		tInsere(p->dir, x);
}

treenodeptr tPesq(treenodeptr p, int x)
{
	if(p == NULL) // elemento n~ao encontrado
		return NULL;

	else if(x == p->info) // elemento encontrado na raiz
		return p;

	else if(x < p->info) // procura na sub ´arvore esquerda
		return tPesq(p->esq, x);

	else             // procura na sub ´arvore direita
		return tPesq(p->dir, x);

}

void preOrdem(treenodeptr arvore)
{
	if(arvore != NULL)
	{
		cout << arvore->info << endl;
		preOrdem(arvore->esq);
		preOrdem(arvore->dir);
	}
}

void tDestruir(treenodeptr &arvore)
{
	if (arvore != NULL)
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);

		delete arvore;
	}

	arvore = NULL;
}

void somaecontpreOrdem(treenodeptr arvore, float &soma, float &cont)
{
	if(arvore != NULL)
	{
		soma = soma + arvore->info;
		cont++;
		somaecontpreOrdem(arvore->esq, soma, cont);
		somaecontpreOrdem(arvore->dir, soma, cont);
	}
}

float media(treenodeptr arvore)
{
	float soma;
	float cont = 0;
	somaecontpreOrdem(arvore, soma, cont);

	return soma / cont;
}

void folhaspreOrdem(treenodeptr arvore, int &soma)
{

	if(arvore != NULL)
	{
		folhaspreOrdem(arvore->esq, soma);
		folhaspreOrdem(arvore->dir, soma);
		if(arvore->esq == NULL && arvore->dir == NULL)
			soma++;
	}
}

int contaFolhas(treenodeptr arvore)
{
	int soma = 0;
	folhaspreOrdem(arvore, soma);

	return soma;
}

void maiorpreOrdem(treenodeptr arvore, int &maior)
{
	if(arvore != NULL)
	{
		if(arvore->info > maior)
			maior = arvore->info;

		maiorpreOrdem(arvore->esq, maior);
		maiorpreOrdem(arvore->dir, maior);
	}
}

void menorpreOrdem(treenodeptr arvore, int &menor)
{
	if(menor == 0)
		menor = arvore->info;

	if(arvore != NULL)
	{
		if(arvore->info < menor)
			menor = arvore->info;

		menorpreOrdem(arvore->esq, menor);
		menorpreOrdem(arvore->dir, menor);
	}
}

int maior(treenodeptr arvore)
{
	int maior = 0;

	maiorpreOrdem(arvore, maior);

	return maior;
}

int menor(treenodeptr arvore)
{
	int menor = 0
				;
	menorpreOrdem(arvore, menor);

	return menor;
}

void emNivel(treenodeptr t)
{
	treenodeptr n;
	list<treenodeptr>q;

	if(t != NULL)
	{
		q.push_back(t);

		while(!q.empty())
		{
			n = *q.begin();
			q.pop_front();

			if(n->esq != NULL)
				q.push_back(n->esq);

			if(n->dir != NULL)
				q.push_back(n->dir);

			cout << n->info << endl;
		}
	}
}

void preOrdemprimo(treenodeptr arvore, int &cont)
{
	int i, num = 100, div = 0;

	if(arvore != NULL)
	{
		for(i = 1 ; i <= arvore->info ; i++)
			if(arvore->info % i == 0)
				div++;
		preOrdemprimo(arvore->esq, cont);
		preOrdemprimo(arvore->dir, cont);
	}
	
	if(div==2)
		cont++;
}

int contaPrimos(treenodeptr arvore)
{
	int cont = 0;

	preOrdemprimo(arvore, cont);

	return cont;
}

int main()
{
	treenodeptr arvore = NULL;

	int n;

	cin >> n;

	while(n != -1)
	{
		tInsere(arvore, n);
		cin >> n;
	}

	cout << contaPrimos(arvore) << " numeros primos" << endl;

	tDestruir(arvore);

	return 0;
}