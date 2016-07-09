#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  while(scanf("%d",&N),N){
    int i = 0;
    while(N != 1){
      int A = N/3;
      if(N%3 != 0){
        A++;
      }
      i += A;
      N = A;
    }
    cout << i << endl;
  }
  return 0;
}
