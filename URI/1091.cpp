#include <bits/stdc++.h>

using namespace std;

int main(){
  int K;
  while(scanf("%d\n",&K ), K){
    int division[2];
    scanf("%d%d",&division[0],&division[1]);

    for (int i = 0; i < K; i++) {
      int consulta[2];
      scanf("%d%d",&consulta[0],&consulta[1]);
      if(division[0] == consulta[0] || division[1] == consulta[1])
        printf("divisa\n");
      else{
        if(division[0] < consulta[0] && division[1] < consulta[1]){
          printf("NE\n");
        }
        if(division[0] < consulta[0] && division[1] > consulta[1]){
          printf("SE\n");
        }
        if(division[0] > consulta[0] && division[1] < consulta[1]){
          printf("NO\n");
        }
        if(division[0] > consulta[0] && division[1] > consulta[1]){
          printf("SO\n");
        }
      }
    }
  }
  return 0;
}
