#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(scanf("%d",&n) != EOF){
    vector <int> x;
    map<int,int> y;
    x.push_back(0);
    for(int i = 1; i <= n; i++){
      int aux;
      scanf("%d",&aux);
      x.push_back(aux + x[i-1]);
      y[x[i]] = 1;
    }
    int resp = 0;
    int dif = x[n]/3;
    if(x[n]%3 == 0){
      for(int i = 1; i <= n; i++){
        int u = x[i] + dif;
        int v = u+dif;
        if(y[u] == 1 && y[v] == 1){
          resp++;
        }
      }
    }
    printf("%d\n",resp);

  }
  return 0;
}
