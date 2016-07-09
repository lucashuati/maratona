#include <bits/stdc++.h>

using namespace std;
int matriz[50][50];
vector<int> visitados;
int escritas;
void init(int n){
  visitados.clear();
  for(int i = 0; i < n; i++){
    visitados.push_back(0);
    for (int j = 0; j < n; j++) {
      matriz[i][j] = 0;
    }
  }
}

int dfs(int v, int n){
  visitados[v] = 1;
  for (int i = 0; i < n; ++i){
    if(matriz[v][i] == 1){
      escritas++;
      if (visitados[i] == 0){
          dfs(i,n);
      }
    }
  }
  //escritas++;
//cout << "risquei voltando para " << v << endl;

}

int main(){
  int cases;
  scanf("%d", &cases);
  while(cases--){
    int inicio;
    scanf("%d", &inicio);
    int vertices, arestas;
    scanf("%d %d", &vertices, &arestas);
    init(vertices);
    for (int i = 0; i < arestas; i++) {
      int u, v;
      scanf("%d %d", &u, &v);
      // /cout << u << " "<< v << endl;
      matriz[u][v] = 1;
      matriz[v][u] = 1;
    }
    escritas = 0;
    dfs(inicio,vertices);
    cout << escritas << endl;
  }

  return 0;
}
