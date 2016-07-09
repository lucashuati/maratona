#include<bits/stdc++.h>

using namespace std;
int v[100];
int main(){
  int n, b;
  while(scanf("%d%d",&n,&b), n+b){
    //cout << n << b;
    //v[80] = 1;
    memset(v,0,sizeof(v));
    //cout << v[80] << endl;
    vector<int> bolas;
    for (size_t i = 0; i < b; i++) {
      int aux;
      scanf("%d",&aux);
      bolas.push_back(aux);
    }
    for(int i = 0; i < bolas.size(); i++){
      for(int j = i; j < bolas.size(); j++){
        int aux = bolas[i]-bolas[j];
        aux = aux < 0 ? (aux*-1) : aux;
        //cout << aux <<" ";
        v[aux] = 1;
      }
    }
    bool no = false;
    for(int i = 0; i <= n; i++){
      if(v[i] == 0){
        no = true;
        break;
      }
    }
    if(no){
      printf("N\n");
    }else{
      printf("Y\n");
    }
  }
  return 0;
}
