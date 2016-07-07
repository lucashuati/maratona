#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100001];
int visitados[100001];
pair<int,int> ms;

void dfs(int u, int o){
	visitados[u] = true;
	for(int i = 0; i < adj[u].size(); i++){
		int v = adj[u][i];
		if(!visitados[v]){
			//cout << i<<"-"
			int menor = min(v,o);
			int maior = max(v,o);
			ms.insert(make_pair(menor,maior));
			dfs(v,o);
		}
	}
}

int main(){
		int v,a;
		scanf("%d%d",&v,&a);
		for (int i = 0; i < a; ++i){
			int u,v;
			scanf("%d%d",&u,&v);
			adj[u].push_back(v);
		}
		bool f = true;
		int aux[v];
		for(int i = 1; i <= v; i++){
			for(int k = 1; k <= v; k++){
				visitados[k] = false;
			}
			dfs(i,i);
		}
		if(ms.size() != v)
			f = false;
		if(f){
			printf("Bolada\n");
		}else{
			printf("Nao Bolada\n");
		}
	
	return 0;
}