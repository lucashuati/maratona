#include <bits/stdc++.h>
#define MAX 200000

using namespace std;

typedef struct aresta{
	int u, v, p;
}aresta;

class union_find{
	public:
		int id[MAX], sz[MAX];
		union_find(int n){
			for(int i = 0; i < n; i++){
					id[i] = i;
					sz[i] = 1;
			}
		}
		int root(int i){
			while(i != id[i]){
				id[i] = id[id[i]];
				i = id[i];
			}
			return i;
		}
		int find(int p, int q){
			return root(p) == root(q);
		}
		void unite(int p, int q){
			int i = root(p);
			int j = root(q);
			if(sz[i] < sz[j]){
				id[i] = j;
				sz[j] += sz[i];
			}else{
				id[j] = i;
				sz[i] += sz[j];
			}
		}
};

bool comp(aresta a, aresta b){
	if(a.p < b.p)
		return true;
	else
		return false;
}

int kruskal(vector<aresta> graph, int n, int e){
	union_find uf(n);
	int u, v, t = 0;
	for(int i = 0; i < e; i++){
		u = graph[i].u;
		v = graph[i].v;
		if(!uf.find(u,v)){
			uf.unite(u,v);
			t += graph[i].p;
		}
	}
	return t;
}

int main(){
	int n, m;
	while(scanf("%d%d", &n, &m), n+m){
		vector<aresta> graph;
		graph.clear();
		int total = 0;
		for(int i = 0; i < m; i++){
			aresta aux;
			scanf("%d%d%d", &aux.u,&aux.v,&aux.p);
			graph.push_back(aux);
			total += aux.p;
		}
		sort(graph.begin(), graph.end(), comp);
		//for(int i = 0; i < graph.size(); i++){
			//printf("%d<->%d(%d)\n",graph[i].u,graph[i].v,graph[i].p);
		//}
		//cout << kruskal(graph,n,m) << endl;
		int result = total - kruskal(graph,n,m);
		printf("%d\n",result);
	}
	return 0;
}