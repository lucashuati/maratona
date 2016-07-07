#include <bits/stdc++.h>

using namespace std;

vector<int> adj[51];
vector<pair<int,int> > arestas;
bool visitados[51];

void dfs(int u, pair<int,int> a){
	visitados[u] = true;

	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(a.first == u && a.second == v){
			continue;
		}else if(a.first == v && a.second == u){
			continue;
		}else{
			if(!visitados[v])
				dfs(v,a);
		}
	}
}

void init(int n){
	memset(visitados,false,sizeof(visitados));
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	arestas.clear();
}

int main(){
	int v,a;
	scanf("%d%d",&v,&a) != EOF){
		init(v);
		for(int i = 0; i < a; i++){
			int u, v;
			scanf("%d%d",&u,&v);
			adj[u].push_back(v);
			adj[v].push_back(u);
			arestas.push_back(make_pair(u,v));
		}
		int p = 0;
		for(int i = 0; i < arestas.size(); i++){
			memset(visitados,false,sizeof(visitados));
			dfs(1,arestas[i]);
			for(int j = 1; j <= v; j++){
				if(!visitados[j]){
					//cout << arestas[i].first << " " << arestas[i].second << endl;
					p++;
					break;
				}
			}
		}
		cout << p << endl;
	}
	return 0;
}