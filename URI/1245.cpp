#include <bits/stdc++.h>

using namespace std;


int main(){
  int n;
  while(scanf("%d",&n) != EOF){
    vector<pair<int,char> > v;
    bool visitados[10001] = {false};
    for(int i = 0; i < n; i++){
      char c;
      int t;
      scanf("%d %c",&t,&c);
      v.push_back(make_pair(t,c));
    }
    int par = 0;
    for(int i = 0; i < v.size(); i++){
      if(visitados[i])
        continue;
      for(int j = i+1; j < v.size(); j++){
        if(visitados[j])
          continue;
        if(v[i].second == 'D'){
            if(v[j].second == 'E' && v[j].first == v[i].first){
              par++;
              visitados[i] = true;
              visitados[j] = true;
              break;
            }
        }else{
          if(v[j].second == 'D' && v[j].first == v[i].first){
            par++;
            visitados[i] = true;
            visitados[j] = true;
            break;
          }
        }
      }
    }
    cout << par << endl;
  }
  return 0;
}
