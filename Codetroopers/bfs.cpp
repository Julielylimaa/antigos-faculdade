#include <bits/stdc++.h>
using namespace std;
vector<int>adj[300];
bool vis[300];
//busca por largura
void bfs(queue<int> q){
	while(!q.empty()){
		int p = q.front();
		q.pop();
		
		for (int i = 0; i<adj[p].size(); i++){
			if (!vis[adj[p][i]]){
				q.push(adj[p][i]);
				vis[adj[p][i]] = true;
			}
		}
	}
}

int main(){
	int v,e;//vertices e arestas
	int x,y;
	cin >> v >> e;
	while (e--){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	queue<int> q;
	q.push(0);
	vis[0] = true;
	return 0;
}