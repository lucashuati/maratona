#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  cin >> c;
  while(c--){
    int n;
    cin >> n;
    if(n > 0){
      if(n%2){
        cout << "ODD POSITIVE" << endl;
      }else{
        cout << "EVEN POSITIVE" << endl;
      }
    }else if(n < 0){
      if(n%2){
        cout << "ODD NEGATIVE" << endl;
      }else{
        cout << "EVEN NEGATIVE" << endl;
      }
    }else{
      cout << "NULL" << endl;
    }
  }
  return 0;
}
