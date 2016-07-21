#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  while(cin >> c){
    vector<string> v;
    while(c--){
      string a;
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
      cout << v[i] << endl;
    }


  }
  return 0;
}
