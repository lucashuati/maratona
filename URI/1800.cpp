#include <bits/stdc++.h>

using namespace std;

int main(){
  int q, e;
  scanf("%d%d",&q,&e);
  int visitados[1001];

  memset(visitados,0,sizeof(visitados));
  for (size_t i = 0; i < e; i++) {
    int aux;
    scanf("%d",&aux);
    visitados[aux] = 1;
  }
  for (size_t i = 0; i < q; i++) {
    int aux;
    scanf("%d",&aux);
    if(visitados[aux] == 0){
      printf("1\n");
      visitados[aux] = 1;
    }else{
      printf("0\n");
    }

  }

  return 0;
}
