#include <iostream>
#include <iomanip>
#include<list>
using namespace std;

struct treenode{
    float info;
    treenode*esq;//aponta para o nó da esquerda
    treenode*dir;//aponta para o nó da direita
};
typedef treenode *treenodeptr;
//define outro nome/ponteiro para a struct


void tInsere(treenodeptr &p, float x){
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


void emNivelSoma(treenodeptr t, float &s, int &quant)
{
    list<treenodeptr> q; // fila auxiliar
    treenodeptr n = t; // ponteiro para varrer a árvore
    if (t != NULL)
    {
	q.push_front(n);
	while (!q.empty())
	{
	    n = q.front();
	    q.pop_front();
	   if (n->esq == NULL && n->dir == NULL){
			s+= n->info;
			quant++;
	   }
	    if (n->esq != NULL)
		q.push_back(n->esq);
	    if (n->dir != NULL)
		q.push_back(n->dir);
	}
    }
}
float calcMedia(treenodeptr arvore){
	float s = 0;//soma das folhas
	int quant = 0; //soma das quantidades de folhas
	treenodeptr t = NULL;
	
	t = arvore;
	emNivelSoma(t,s,quant);
	
	return s/quant;
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
	treenodeptr arvore = NULL;
	
	float x; //inserir na arvore
	

	cin >> x;
	while (x!=-1){
		tInsere(arvore, x);
		cin >> x;
	}
	
	
	
	float media;
	media = calcMedia(arvore);
	cout << fixed << setprecision(2)<< "media = "<< media << endl;
	tDestruir (arvore);
	 
	 
	return 0;
}