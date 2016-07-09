#include <bits/stdc++.h>

using namespace std;
long long int pe[26] ,mat[1000001];

long long int troco(long long int n, long long int l){

  for(int i = 0; i <= l; i++){
    mat[i] = i;
  }
  for(long long int i = 2; i <= n; i++){
    int f = l;
    for(long long int j = pe[i]; j <= f; j++){
        mat[j] = min(mat[j],mat[j-pe[i]]+1);
    }
  }
  return mat[l];
}
int main(){
  int cases;
  scanf("%d\n",&cases);
  while(cases--){
    int m,n;
    scanf("%d%d ",&n,&m);
    int ve[101] = {0};
    for(int i = 1; i <= n; i++){
      scanf("%lld",&pe[i]);
    }
    printf("%lld\n",troco(n,m));
  }
  return 0;
}
