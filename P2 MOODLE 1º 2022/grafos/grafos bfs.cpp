#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v; // vertice adjacente
    int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p){
	no aux;
		
	//criando aresta de ida
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
			
	//criando aresta de volta (nao orientado)
	aux.v = u;
	adj[v].push_back(aux);

}

void bfs(list<no>adj[], int nVertices, int s){
	char state[10]; //'u': nao processado, 'd': descoberto, 'p': processado
	int p[10]; //pai
	int u, v; //contador
	list <int> Q; //fila aux
	list<no>::iterator q;
	
	for (u = 0; u < nVertices; u++) //for each vertex u in V[G]-{s}
		if (u != s){
			state[u] = 'u'; //state[u] = "undiscovered"
			p[u] = -1;	//p[u] = null //sem pais
		}
	
	state[s] = 'd';	//state[s] = "discovered"
	p[s]=-1; //p[s] = null
	Q.push_back(s); //Q = [s]
	
	while (!Q.empty()){ //while (Q!= vazio)
		u = *Q.begin(); //u = dequeue[Q]
		Q.pop_front();
		cout << u << endl; //process vertex u
	
	
		for(q=adj[u].begin(); q!=adj[u].end(); q++){//for each v in adj[u]
			v= q->v; 
			cout << u << " " << v << endl;
		
			if (state[v]=='u'){ //se state[v] = nao processado
				state[v] = 'd'; //passa a ser descoberto
				p[v] = u; 
				Q.push_back(v); //adiciona v no final da lista
			}
		}
		state[u] = 'p'; //state[u] = 'processado'
	}
}
	
int main (){
	int nVertices; //no de vertices
	list<no>adj[10]; //lista de adjacencia
	int u,v; //vertices de origem e destino de uma aresta
	int peso; //peso da aresta
	int s; //vertice inicial 

	
	cin >> nVertices;
	cin >> s; 
	
	cin >> u >> v >> peso; //entrada do vertice origem, destino e peso
	do{
		cria_aresta(adj,u,v,peso);
		
		cin >> u >> v >> peso;
		
	}while (u!= -1 && v!=-1 && peso!=-1);
	
	bfs(adj,nVertices,s);
	
	return 0;
}