#include <bits/stdc++.h>

using namespace std;

typedef struct t{
  string nome;
  int pontos,vitorias,gols, id;
}times;

bool comp(times a, times b){
  if(a.pontos == b.pontos){
    if(a.vitorias == b.vitorias){
      if(a.gols == b.gols){
        return a.id < b.id;
      }else
        return a.gols > b.gols;
    }else
      return a.vitorias > b.vitorias;
  }else
    return a.pontos > b.pontos;
}
int main(){
  int c;
  cin >> c;
  while(c--){
    int t,j;
    map<string,int> mm;
    vector<times> v;
    cin >> t >> j;
    int i = 0;
    while(t--){
      string aux;
      cin >> aux;
      times a ;
      a.nome = aux;
      a.id = i;
      v.push_back(a);
      mm[aux] = i++;
    }
    while(j--){
      int ga,gb;
      string ta,tb;
      cin >> ga >> ta >> gb >> tb;
      int t1 = mm[ta],t2 = mm[tb];
      v[t1].gols += ga;
      v[t2].gols += gb;
      if(ga == gb){
        v[t1].pontos++;
        v[t2].pontos++;
      }else if(ga > gb){
        v[t1].vitorias++;
        v[t1].pontos += 3;
      }else{
        v[t2].vitorias++;
        v[t2].pontos += 3;
      }
    }
    sort(v.begin(),v.end(),comp);
    for(int i = 0; i < v.size(); i++){
      cout << v[i].nome << endl;
    }
  }
  return 0;
}
