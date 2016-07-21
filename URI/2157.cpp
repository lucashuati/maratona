#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  cin >> c;
  while(c--){
    int a,b;
    cin >> a >> b;
    string aa = "";
    for(int i = a; i <= b; i++){
      aa += to_string(i);
    }
    cout << aa;
    reverse(aa.begin(),aa.end());
    cout << aa << endl;

  }
  return 0;
}
