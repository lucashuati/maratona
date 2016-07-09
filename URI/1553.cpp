#include <bits/stdc++.h>

using namespace std;

int v[1001];
int main(){
  int n,k,maior = -1;
  while(scanf("%d %d", &n, &k), n + k){
    maior = -1;
    memset(v,0,1001);
    for (int i = 0; i < n; i++) {
      int aux;
      scanf("%d", &aux);
      maior = max(maior,aux);
      v[aux]++;
    }
    int soma = 0;
    for(int i = 1; i <= maior; i++){
      if(v[i] >= k)
        soma++;
    }
    cout << soma << endl;
  }
  return 0;
}
