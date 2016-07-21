#include <bits/stdc++.h>

using namespace std;

int main(){
  string p;
  while (cin >> p) {
    int l = p.size();
    string aux2 = p;
    int li = 0;
    for(int i = l-1, j = 1; i >= 0; i--, j++){
      string aux = p.substr(i,j);
      aux2.pop_back();
      size_t found=aux2.find(aux);
      //cout << aux2 << " " << aux << endl;
      if (found == string::npos){
        li = i+1;
        break;
      }
    }
    for(int i = 0 ;i < li; i++){
      cout << p[i];
    }
    cout << endl;
  }
  return 0;
}
