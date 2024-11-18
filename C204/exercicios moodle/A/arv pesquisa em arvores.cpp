#include <iostream>
using namespace std;
struct treenode{
    int info;
    treenode*esq;//aponta para o nó da esquerda
    treenode*dir;//aponta para o nó da direita
    
};
typedef treenode *treenodeptr;
//define outro nome para a struct
void tInsere(treenodeptr &p, int x){
    //se p aponta para a raiz vai estar null
    if (p==NULL){
        p = new treenode;
        p-> info = x; //insere a raiz
        p-> esq = NULL;
        p-> dir = NULL;
    }
    else if (x< p->info)
        tInsere(p->esq, x);
    else
        tInsere(p->dir, x);
}
treenodeptr tPesq(treenodeptr p, int x){
	if (p == NULL) // elemento nao encontrado
		return NULL;
	else
		if (x == p->info) // elemento encontrado na raiz
			return p;
		else
			if (x < p->info) // procura na sub ´arvore esquerda
				return tPesq(p->esq,x);
			else             // procura na sub ´arvore direita
				return tPesq(p->dir,x);
				
}
void posOrdem (treenodeptr arvore)
{
	if (arvore != NULL) {
		posOrdem(arvore->esq);
		posOrdem(arvore->dir);
		cout << arvore->info << endl;
	}
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

int main (){
    treenodeptr arvore = NULL; //limpar o ponteiro
    treenodeptr p = NULL, t = NULL; //ponteiro aux
   	int x;
    cin >> x;
    tInsere(arvore, x);
    p = arvore;
    
	while (x!=-1){
		cin >> x;
		 t = tPesq(p,x);
		if (t ==NULL && x!=-1)
			tInsere(arvore, x);
	}

    posOrdem(arvore);
	tDestruir(arvore);
    return 0;
}