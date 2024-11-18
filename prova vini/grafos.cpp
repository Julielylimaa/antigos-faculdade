#include <iostream>
#include <list>
using namespace std;

void bfs(list<no>adj[], int nVertices, int s)
{
    int v; //vertice de destino da aresta
    int peso; //peso da aresta 
};

int main()
{
    list<no> adj[10]; //lista de adjacências

    int nVertices; //numero de vértices do grafo
    int u, v; //vértices de origem e destino de uma aresta
    int p; //peso da aresta
    no aux; //var aux para inserir as arestas na lista de adjacências
    int i;
    list<no>::iterator q; //iterador para varrer a lista de adjacências
    int orientado ; //0: nao orientado, 1: orientado

    //lendo numero de vertices do grafo
    cin >> nVertices;
    cin >> orientado;

    for(i=0;i<8;i++)
    {
        cin >> u  >> v >> p;
        aux.v = v;
        aux.peso = p;
        adj[u].push_back(aux);

        if(orientado == 0)
        {
            aux.v = u;
            adj[v].push_back(aux);
        }
    }

    //mostrando a lista de adjacências
    cout << "Lista de adjacencia:" << endl;
    for(i=0;i<nVertices;i++)
        for(q=adj[i].begin();q!=adj[i].end();q++)
            cout << i << " " << q->v << " " << q->peso << endl;

    return 0;
}