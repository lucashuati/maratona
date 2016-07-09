#include <bits/stdc++.h>

using namespace std;

int main(){
  int l,c;
  while(scanf("%d %d ",&l, &c) != EOF){
    int matriz[l+1];
    memset(matriz,0,sizeof(matriz));
    for(int i = 1; i <= l;i++){
      for(int j = 0; j < c; j++){
        int a;
        scanf("%d",&a);
        if(a != 0){
          matriz[i]++;
        }
      }
    }
    int r = 0;
    for(int i = 1; i <= l; i++){
      if(matriz[i] == c){
        r += 1;
      }
    }
    printf("%d\n",r);
  }

  return 0;
}
