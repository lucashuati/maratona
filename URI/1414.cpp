#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,j;
  while(scanf("%d%d",&t,&j),t+j){
    string x;
    int p;
    int r = 0;
    int max_empates = j;
    int times = t;
    while(t--){
      cin >> x;
      scanf("%d",&p);
      r += p;
    }
    printf("%d\n",3*j - r);


  }
  return 0;
}
