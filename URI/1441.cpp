#include <bits/stdc++.h>

using namespace std;

int maior = -1;
int seq(int h){
  maior = max(maior,h);
  if(h == 1)
    return h;
  if(h%2){
    seq(3*h+1);
  }else{
    seq(h/2);
  }
}

int main(){
  int n;
  while(cin >> n, n){
      maior = -1;
      seq(n);
      cout << maior << endl;
  }

  return 0;
}
