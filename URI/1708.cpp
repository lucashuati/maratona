#include <bits/stdc++.h>

using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int t = 2;
  int aa = a, bb = b;
  while(a+aa >  b){
    t++;
    a += aa;
    b += bb;
  }
  printf("%d\n",t);
  return 0;
}
