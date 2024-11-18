#include <iostream>//biblioteca
#include <list>//biblioteca
#include <climits>//biblioteca
using namespace std;
struct no
{
    int v;//dados do programa
    int peso;//dados do programa
};
void aresta(list<no> adj[], int u, int v, int p, int orientado) 
{
    if (u != -1 && v != -1 && p != -1)
    {
        no aux;//struct
        aux.v = v;//dados do programa
        aux.peso = p;//dados do programa
        adj[u].push_back(aux);
        if (orientado == 0)//teste
        {
            aux.v = u;//atribuição
            adj[v].push_back(aux);
        }
    }
}
void saida(int parent[], int end, int distance[], int nVertices) 
{
    list<int>pilha;//struct
    int a = end;//dados do programa
    do
    {
        pilha.push_front(a);
        a = parent[a];//atribuição
    } while (a != -1);//teste do programa
    cout << "Menor caminho: ";
    while (!pilha.empty())
    {
        a = *pilha.begin();//atribuição
        cout << a << " ";
        pilha.pop_front();
    }
    cout << endl << " Custo: " << distance[end] << endl;
}
void dijkstra(list<no> adj[], int nVertices, int start, int end) {
    int u;//dados do codigo
    int v;//dados do codigo
    bool intree[100];//dados do codigo
    int distance[100];//dados do codigo
    int parent[100];//dados do codigo
    list<no>::iterator p;
    int destino;//dados do codigo
    int weight;//dados do codigo
    int distancia;//dados do codigo
    int pesototal;//dados do codigo
    for (u = 0; u < nVertices; u++)
    {
        intree[u] = false;//atribuição
        distance[u] = INT_MAX;//atribuição
        parent[u] = -1;//atribuição
    }
    distance[start] = 0;//atribuição
    v = start;//atribuição
    while (intree[v] == false)
    {
        intree[v] = true;//atribuição
        for (p = adj[v].begin(); p != adj[v].end(); p++)
        {
            destino = p->v;
            weight = p->peso;
            if (distance[destino] > distance[v] + weight)
            {
                distance[destino] = distance[v] + weight;
                parent[destino] = v;
            }
        }
        cout << v << " ";
        v = 0;
        distancia = INT_MAX;
        for (u = 0; u < nVertices; u++)
        {
            if (intree[u] == false && distancia > distance[u])
            {
                distancia = distance[u];
                v = u;
            }
        }
    }
    pesototal = 0;
    cout << distance[end] << endl;
}
int main() {
    list<no> adj[100];//struct
    int u;//dados do codigo
    int v;//dados do codigo
    int peso;//dados do codigo
    int orientado;//dados do codigo
    int nVertices;//dados do codigo
    int start;//dados do codigo
    int end;//dados do codigo
    cin >> nVertices >> orientado >> start >> end;//entrada de dados
    while (u != -1 && v != -1 && peso != -1)
    {
        cin >> u;//entrada de dados
        cin >> v;//entrada de dados
        cin >> peso;//entrada de dados
        aresta(adj, u, v, peso, orientado);//função
    }
    dijkstra(adj, nVertices, start, end);//função void
    return 0;
}