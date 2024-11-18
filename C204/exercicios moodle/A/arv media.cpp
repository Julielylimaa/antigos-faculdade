#include <iostream>
#include <iomanip>
using namespace std;

struct treenode{
    int info;
    treenode*esq;//aponta para o nó da esquerda
    treenode*dir;//aponta para o nó da direita
};
typedef treenode *treenodeptr;
//define outro nome/ponteiro para a struct


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

void somaetamposOrdem (treenodeptr arvore, int &s1, int &n)
{
	if (arvore != NULL)
	{
		somaetamposOrdem(arvore->esq, s1,n);
		somaetamposOrdem(arvore->dir, s1,n);
		s1+= arvore->info;
		n++;
	}
}


float media (treenodeptr arvore){
	int s1 = 0;
	int n =0;
	somaetamposOrdem(arvore,s1,n); 
	return s1/(n*1.0);
}


int main (){
	treenodeptr arvore = NULL;

	int x; //inserir na arvore
	
	
	cin >> x;
	while (x!=-1){
		tInsere(arvore, x);
		cin >> x;
	}
	
	 
	 float m;
	 m = media(arvore); 
	
	cout << "Media: " << fixed << setprecision(2) << m << endl;
	
	return 0;
}