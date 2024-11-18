#include <iostream>
using namespace std;
struct treenode
{
	int info;
	treenode*esq;//aponta para o nó da esquerda
	treenode*dir;//aponta para o nó da direita
};
typedef treenode *treenodeptr;
//define outro nome para a struct
void tInsere(treenodeptr &p, int x)
{
	//se p aponta para a raiz vai estar null
	if (p == NULL)
	{
		p = new treenode;
		p-> info = x; //insere a raiz
		p-> esq = NULL;
		p-> dir = NULL;
	}
	else if (x < p->info)
		tInsere(p->esq, x);
	else
		tInsere(p->dir, x);
}

void varreremOrdem (treenodeptr arvore, int &s)
{
	if (arvore != NULL)
	{
		
		varreremOrdem(arvore->esq,s);
		varreremOrdem(arvore->dir,s);
		if (arvore->esq == NULL && arvore->dir == NULL){
			s++;
		}
	}
}
int contaFolhas(treenodeptr arvore)
{
	int s =0;
	varreremOrdem(arvore,s);
	return s;
}


void tDestruir (treenodeptr &arvore)
{
	if (arvore != NULL)
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);
		delete arvore;
	}
	arvore = NULL;
}


int main ()
{

	treenodeptr arvore = NULL;

	int x; //inserir na arvore


	cin >> x;
	while (x != -1)
	{
		tInsere(arvore, x);
		cin >> x;
	}

	int folhas = contaFolhas(arvore);
	
	cout << folhas<< endl;
    
    tDestruir(arvore);

	return 0;
}
