#include <bits/stdc++.h>

using namespace std;

vector<int> listaad[21];
bool visitados[21];

void dfs(int v, int prof){
  visitados[v] = true;
  int p = v;
  for(int i = 0; i < listaad[v].size(); i++){
    int w = listaad[v][i];
    for (int k = 0; k < prof; k++) {
      printf("  ");
    }
    printf("%d-%d",p,w);
    if(!visitados[w]){
      printf(" pathR(G,%d)\n",w);
      dfs(w,prof+1);
    }else
      printf("\n");
  }
}

void init(){
  memset(visitados,false,sizeof(visitados));
  for(int i = 0; i < 21; i++){
    listaad[i].clear();
  }
}
int main(){
  int cases, caso = 1;
  scanf("%d",&cases);
  while(cases--){
    init();
    int arestas, vertices;
    scanf("%d%d",&vertices,&arestas);
    for(int i = 0; i < arestas; i++){
      int u, v;
      scanf("%d%d",&u,&v);
      listaad[u].push_back(v);
      //cout << u << " " << v << " " << i << endl;
    }
    printf("Caso %d:\n",caso++);
    set <int> teste;
    for(int i = 0; i < vertices; i++){
      for(int w = 0; w < listaad[i].size(); w++){
        teste.insert(listaad[i][w]);
      }
      vector<int> tes(teste.begin(),teste.end());
      listaad[i] = tes;
      teste.clear();
    }
    for(int i = 0; i < vertices; i++){
      if(!visitados[i] && listaad[i].size() > 0){
        dfs(i,1);
        cout << endl;
      }
    }
  }
  return 0;
}
