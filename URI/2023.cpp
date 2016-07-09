#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> v;
  map<string,string> mm;
  string a;
  while(getline(cin,a)){
    //cout << a << endl;
    string b = a;
    for(int i = 0; i < a.size();i++){
      b[i] = tolower(b[i]);
    }
    mm[b] = a;
    v.push_back(b);
  }
  sort(v.begin(),v.end());
  cout << mm[v[v.size()-1]] << endl;
  return 0;
}
