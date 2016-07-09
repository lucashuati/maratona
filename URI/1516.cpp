#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  while(scanf("%d%d", &n,&m), n+m){
    vector<string> v;
    string str;
    for (int i = 0; i < n; i++) {
      cin >> str;
      v.push_back(str);
    }
    int N, M;
    scanf("%d%d", &N,&M);
    int aumentol = N/n;
    int aumentoc = M/m;
    //cout << aumentol << " " << aumentoc;
    //string a = "";
    for(int i = 0; i < v.size(); i++) {
      string a = "";
      for(int j = 0; j < v[i].size(); j++) {
        for(int k = 0; k < aumentoc ; k++){
            a += v[i][j];
        }
      }
      for(int p = 0; p < aumentol; p++)
        cout << a << endl;
    }

    cout << endl;

  }
  return 0;
}
