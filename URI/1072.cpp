#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  cin >> c;
  int in = 0,out = 0;
  while(c--){
    int n;
    cin >> n;
    if(n >= 10 && n<=20){
      in++;
    }else{
      out++;
    }
  }
  cout << in << " in" << endl << out << " out" << endl;
  return 0;
}
