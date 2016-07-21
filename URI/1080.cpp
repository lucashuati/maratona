#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int i = 1;
  int m = -1,p;
  while(cin >> n){
    if(m < n){
      m = n;
      p = i;
    }
    i++;
  }
  cout << m << endl << p << endl;
  return 0;
}
