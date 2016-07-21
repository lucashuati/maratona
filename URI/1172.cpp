#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int i = 0;
  while(cin >> n){
    if(n <= 0)
      n = 1;
    printf("X[%d] = %d\n",i++,n);
  }
  return 0;
}
