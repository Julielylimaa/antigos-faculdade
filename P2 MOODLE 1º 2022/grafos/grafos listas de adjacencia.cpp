#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v; // vertice adjacente
    int peso; // peso da aresta
};
void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){
	no aux;
	
	//se nao for orientado (cria aresta ida e volta)
	if (orientado == 0){
		
		//criando aresta de ida
		aux.v = v;
		aux.peso = p;
		adj[u].push_back(aux);
			
		//criando aresta de volta (nao orientado)
		aux.v = u;
		adj[v].push_back(aux);
		
	}
	//se for orientado (só cria aresta de ida)
	if (orientado == 1){
		aux.v = v;
		aux.peso = p;
		adj[u].push_back(aux);
	}
}

int main (){
	list<no> adj[10]; //lista de adjacencia
	int u,v; //vertices de origem e destino de uma aresta
	int peso; //peso da aresta u-v
	int nVertices;
	int orientado;
	list<no>::iterator p;
	
	
	//entrada de dados
	cin >> nVertices >> orientado;
	
	cin >> u >> v >> peso;
	do{
		cria_aresta(adj,u,v,peso,orientado);
		cin >> u >> v >> peso;
		
	}while (u!= -1 && v!=-1 && peso!=-1);
	
	
	
	//mostrando o grafo
	for (int i = 0; i<nVertices; i++){
		for(p = adj[i].begin(); p != adj[i].end(); p++){
			cout<< i << " ";
			cout << p->v << " ";
			cout << p->peso << endl;
		}
	}
	
	return 0;
}