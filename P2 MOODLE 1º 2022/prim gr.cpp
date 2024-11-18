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


void prim(list<no>adj[], int nVertices, int start){
	int u, v; //contadores
	bool intree[20];
	int distancia[20], parent[20]; //distancia e pai
 	int dist; 
	int int_max = 1000;//distancia maxima
 	list<no>::iterator p;
 	int destino, peso;
 	int custo = 0; //soma das distancias
	
	for(u = 0; u <nVertices; u++){
		intree[u] = false;
		distancia[u] = int_max;
		parent[u] = -1;
	}
	
	distancia[start] = 0;
	v = start;
	
	while (intree[v] == false){
		intree[v] = true;
		
		for(p = adj[v].begin(); p!=adj[v].end(); p++){
			destino = p->v;
			peso = p->peso;
			if (distancia[destino] > peso && intree[destino]==false){
				distancia[destino] = peso;
				parent[destino] = v;
				
			}
		}
		v = 0;
		dist = int_max;
		for(u = 0; u <nVertices; u++){
		   	if (intree[u] == false && dist > distancia[u]){
				   dist = distancia[u];
				   v = u;
			   }
		}
	}
	
	for (int i = 0; i < nVertices; i++){
		
	
		
		if (parent[i] != -1){
			cout << parent[i]<< " " << i  << endl;
			custo+= distancia[i];
		}
	}
	cout << "Custo: " << custo << endl;
}


int main (){
	int nVertices, orientado, start;
	int u, v, peso;
	list<no>adj[10]; //lista de adjacencia

	
	
	//entrada de dados (tamanho, orientado, start)
	cin >> nVertices >> orientado >> start;
	
	//vertice de origem, destino e peso
	cin >> u >> v >> peso;
	//criando a aresta
	do{
		cria_aresta(adj,u,v,peso,orientado);
		cin >> u >> v >> peso;
		
	}while (u!= -1 && v!=-1 && peso!=-1);
	
	cout << "Arvore Geradora Minima: " << endl;
	
	prim(adj,nVertices,start);
	
	
	
	return 0;
}