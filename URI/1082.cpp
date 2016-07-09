#include <bits/stdc++.h>

using namespace std;

vector<int> listad[27];
vector<bool> visitados;
vector<char> components;
map <char,int> mm;
map <int,char> mr;

int dfs(int v){
  visitados[v] = true;
  components.push_back(mr[v]);
  for (int i = 0; i < listad[v].size(); i++) {
    int u = listad[v][i];
    if(!visitados[u])
      dfs(u);
  }
}
void clear_all(int v){
  for (int i = 0; i <= v; i++) {
    listad[i].clear();
  }
  visitados.clear();
  for (int i = 0; i <= v; i++) {
    visitados.push_back(false);
  }
}
int main(){
  int cases;
  int casos = 1;
  scanf("%d", &cases);
  int u = 1;
  for(char i = 'a'; i <= 'z'; i++){
    mm[i] = u;
    mr[u] = i;
    //cout << mm[i] << " " << mr[u] << endl;
    u++;
  }
  while(cases--){
    cout << "Case #"<< casos++ << ":" << endl;
    int v, e;
    scanf("%d%d", &v, &e);
  //  cout << v << " " << e << endl;
    clear_all(v);
    for (int i = 0; i < e; i++) {
      char u, v;
      cin >> u >> v;
      //scanf("%c%c",&u, &v);
      //cout << u << " " << v << endl;
      int m_u = mm[u];
      int m_v = mm[v];
      //cout << m_u << " " << m_v << endl;
      listad[m_u].push_back(m_v);
      listad[m_v].push_back(m_u);
    }
    int count = 0;
    for (int i = 1; i <= v; i++) {
      if(!visitados[i]){
        count++;
        dfs(i);
        sort(components.begin(),components.end());
        for (size_t i = 0; i < components.size(); i++) {
          printf("%c,",components[i]);
        }
        components.clear();
        cout << endl;
      }
    }
    printf("%d connected components\n\n",count);
  }
  return 0;
}
