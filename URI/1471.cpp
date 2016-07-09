#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  while(cin >> n >> m){
    int v[n+1];
    memset(v,0,sizeof(v));
    for(int i = 0; i < m; i++){
      int a;
      cin >> a;
      v[a] = 1;
    }
    //cout << endl;
    bool f = false;
    for(int i = 1; i <= n; i++){
      //cout << v[i] << " " << i << endl;
      if(v[i] != 1){
        f = true;
        printf("%d ",i);
      }
    }
    if(!f)
      cout << '*';
    cout << endl;
  }
  return 0;
}
