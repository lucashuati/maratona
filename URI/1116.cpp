#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i ++){
      int x,y;
      scanf("%d%d\n",&x,&y);
      float result = (float)x/(float)y;
      if(y == 0)
        printf("divisao impossivel\n");
      else
        printf("%.1f\n",result);
  }
  return 0;
}
