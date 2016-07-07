#include <bits/stdc++.h>

#define white 0
#define grey 1
#define black 2

using namespace std;

vector<int> listaad[10001];
vector<int> color;
vector<bool> avanco;
vector<bool> retorno;
bool ciclo = false;

bool dfs(int u) {
    color[u] = grey;
    for(int i= 0; i< listaad[u].size(); i++) {
        int v = listaad[u][i];
        if(color[v] == white) {
            if(!dfs(v)) {
                return false;
            }
        } else if(color[v] == grey) {
            return false;
        }
    }

    color[u] = black;
    return true;
}

void searchCycles() {
  for(int index = 1; index < color.size(); index++) {
    if(!dfs(index)) {
        cout << "SIM" << endl;
      return;
    }
  }
  cout << "NAO" << endl;
}
 
int main(){
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n,m;
    scanf("%d%d\n",&n,&m);
    color.clear();
    for (int j = 0; j <= n; j++) {
      listaad[j].clear();
      color.push_back(white);
    }
    for (int j = 0; j < m; j++) {
      int a,b;
      scanf("%d%d\n",&a,&b);
      listaad[a].push_back(b);
    }
    searchCycles();
  }
  
  return 0;
}