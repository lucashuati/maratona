#include <bits/stdc++.h>

using namespace std;
long long int pe[10] = {0,1,2,6,24,120,720,5040,40320,362880},mat[10][100001];

long long int troco(long long int n, long long int l){
  for(int i = 0; i <= n; i++){
    mat[i][0] = 0;
  }

  for(int i = 1; i <= l; i++){
    mat[0][i] = 9999999;
  }
  for(long long int i = 1; i <= n; i++){
    for(long long int j = 1; j <= l; j++){
      if(pe[i] > j){
        mat[i][j] = mat[i-1][j];
      }else if(mat[i-1][j] < mat[i][j-pe[i]] + 1){
        mat[i][j] = mat[i-1][j];
      }else{
        mat[i][j] = mat[i][j-pe[i]] + 1;
      }
    }
  }
  return mat[n][l];
}

int main(){
  long long int p,w;
  scanf("%lld",&w);
  printf("%lld\n",troco(9,w));
  
  return 0;
}
