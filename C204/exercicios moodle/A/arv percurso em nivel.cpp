#include <iostream>
#include <list>
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

void emNivel (treenodeptr t){
	treenodeptr n;
	list<treenodeptr> q;
	
	
	if (t!=NULL){
		q.push_back(t);
		while(!q.empty()){
			n = *q.begin();
			q.pop_front();
			if (n->esq != NULL){
				q.push_back(n->esq);
			}
			if (n-> dir != NULL){
				q.push_back(n->dir);
			}
			
			cout << n->info << " ";
		}
		
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
    int x;
    
    cin >> x;
    
    while (x != -1 ){
    	tInsere(arvore, x); //inserindo elementos na arvore
    	cin >> x;
		
    }
    
    emNivel(arvore);
    tDestruir(arvore);
	return 0;
}