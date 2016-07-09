#include <bits/stdc++.h>

using namespace std;
long long int pe[101],v[101], mat[101][1001];

long long int mochila(long long int n, long long int l){
  for(long long int i = 1; i <= n; i++){
    for(long long int j = 1; j <= l; j++){
      if(j >= pe[i]){
        mat[i][j] = max(mat[i-1][j],mat[i-1][j-pe[i]] + v[i]);
      }else{
        mat[i][j] = mat[i-1][j];
      }
    }
  }
  return mat[n][l];
}

void init(long long int p,long long int w){
  for(long long int i = 0; i <= p; i++){
    for(long long int j = 0; j <= w; j++){
      mat[i][j] = 0;
    }
    pe[i] = 0;
    v[i] = 0;
  }
}
int main(){
  long long int cases, galhos = 1;
  scanf("%lld",&cases);
  while(cases--){
    long long int p,w;
    scanf("%lld%lld",&p,&w);
    init(p,w);
    for(long long int i = 1; i <= p; i++){
      scanf("%lld%lld",&v[i],&pe[i]);
    }
    printf("Galho %lld:\nNumero total de enfeites: %lld\n\n",galhos++,mochila(p,w));
    //imp(p,w);
  }
  return 0;
}
