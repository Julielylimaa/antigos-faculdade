#include <bits/stdc++.h>
using namespace std;
vector<int>adj[300];
bool vis[300];

//em profundidade
void dfs(int u){
	vis [u]= true;
	for (int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		
		if (!vis[v]){
			dfs[v];
		}
	}
}


int main (){
	
	int v,e;//vertices e arestas
	int x,y;
	cin >> v >> e;
	while (e--){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(0);
	
	return 0;
}