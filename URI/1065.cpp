#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int pos = 0;
  double total = 0;
  while(cin >> n){
    if(n % 2 == 0){
      pos++;
    }
  }
  cout << pos << " valores pares" << endl;
  return 0;
}
