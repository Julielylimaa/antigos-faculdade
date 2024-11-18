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

void dijkstra(list<no>adj[], int nVertices, int start, int end){
	int u, v; //contadores
	bool intree[20];
	int distancia[20], parent[20]; //distancia e pai
	int destino, peso, dist;
	int int_max = 1000;//distancia maxima
 	list<no>::iterator p;
 	int custo = 0;
 	list<int>caminho; //lista que armazena o caminho final
 	int i = end;//variavel aux para lista caminho
 	int x; 
 	
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
			if (distancia[destino] > (distancia[v]+peso)){
				distancia[destino] = distancia[v] + peso;
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
	
	  
//Criei uma lista para armazenar os precendentes (parents)
//seguindo o caminho do end para o start	
	do{
		caminho.push_front(i);
		i = parent[i];
	}while (i != -1); 
//start nao tem precendente, logo quando i==-1 acabou
	
//cout do começo da lista e removendo os elementos dela em seguida	
	while(!caminho.empty()) //enquanto a lista nao estiver vazia
	{
		x = *caminho.begin(); //primeiro elemento da lista
		cout << x << " ";
		caminho.pop_front(); //remove o primeiro elemento da lista
	}   	
	


	//custo total 
	custo = distancia[end];
	cout << "\nCusto: " << custo << endl;
	
}

int main (){
	int nVertices, orientado;
	int start, end; //vertice de inicio e vertice de destino
	int u, v, peso;
	list<no>adj[10]; //lista de adjacencia
	
	//entrada dos dados: tamanho do vertice, orientado, inicio e destino
	cin >> nVertices >> orientado >> start >> end;
	
	//vertice de origem, destino e peso
	cin >> u >> v >> peso;
	//criando a aresta
	do{
		cria_aresta(adj,u,v,peso,orientado);
		cin >> u >> v >> peso;
		
	}while (u!= -1 && v!=-1 && peso!=-1);
	
	
	
	cout << "Menor caminho: ";
	dijkstra(adj,nVertices,start,end);
	
	return 0;
}