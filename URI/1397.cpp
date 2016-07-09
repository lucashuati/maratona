#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(scanf("%d",&n),n){
    int a = 0, b = 0;
    for (size_t i = 0; i < n; i++) {
      int auxa,auxb;
      scanf("%d%d",&auxa,&auxb);
      if(auxa > auxb)
        a++;
      if(auxa < auxb)
        b++;
    }
    printf("%d %d\n",a,b);
  }
  return 0;
}
