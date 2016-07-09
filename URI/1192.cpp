#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases;
  scanf("%d\n",&cases);
  for (size_t i = 0; i < cases; i++) {
      int um, dois;
      char letra;
      scanf("%d%c%d",&um,&letra,&dois);
      if(um == dois)
        printf("%d\n",um*dois);
      else{
        if(letra >= 'A' && letra <= 'Z'){
          printf("%d\n",dois - um);
        }else{
          printf("%d\n",um+dois);
        }
      }
  }
  return 0;
}
