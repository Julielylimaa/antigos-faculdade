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
void ordenacao_topologica(int f[], int nVertices){
	int x, y; //aux de contagem
	int t; //variavel para comparar o tempo
	int vert; //variavel para saida do vertice
	list<int>ordem;
	int p;
	
	for(y = 0; y < nVertices;  y++){
		t = 0;
		for (x = 0; x < nVertices; x++){
			if (f[x] > t){
				t = f[x];
				vert = x;
			}
		} //no final do loop vert marcará o vertice de maior tempo
		
		ordem.push_front(vert);
		f[vert] = 0; //zerando o maior tempo
	}
	
	
		
	while (!ordem.empty()){
		p = *ordem.begin();
		cout << p << " ";
		ordem.pop_front();
	}
	
}

void DFS_VISIT(list<no>adj[], int u, int color[], int pi[], int d[], int f[], int tempo){
	list<no>::iterator p;
	int v; //aux
	
	color[u] = 1; // passando cor para cinza
	tempo += 1;
	
	d[u]= tempo;
	
	for(p = adj[u].begin(); p!= adj[u].end(); p++){
		v = p-> v;
		
		if (color[v] == 0){
			pi[v] = u;
			DFS_VISIT(adj,v,color, pi, d, f,tempo);
		}
	}
	color[u] = 2; //passando cor para preto
	f[u] = tempo + 1;
}

void dfs(list<no>adj[], int nVertices){
	int u; //aux de contagem
	int color[20]; //0:Branco  1:cinza  2:preto
	int pi[20];
	int tempo;
	int f[20]; // instante que fica preto
	int d[20]; //instante que é descoberto (branco -> cinza)
	
	for(u = 0; u <nVertices; u++){
		color[u] = 0;	
		pi[u] = -1;
	}
	tempo =0;
	
	for(u = 0; u <nVertices; u++){
		if (color[u] ==0)
			DFS_VISIT(adj, u, color, pi, d, f, tempo);
	}
	
	ordenacao_topologica(f, nVertices);
}




int main (){
	int u, v; //u:origem  v: destino
	int nVertices, orientado; //numero de vertices e tipo do grafo
	int p = 0; //peso nao sera usado 
	list<no>adj[10];
	

	
	cin >> nVertices >> orientado;
	
	cin >> u >> v;
	
	do{
		cria_aresta(adj,u,v,p,orientado);
		cin >> u >> v;
	}while(u != -1 && v != -1);
	
	dfs(adj, nVertices);
	
	return 0;
}