#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(scanf("%d",&n),n){
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++) {
      int ni;
      scanf("%d",&ni);
      v.push_back(ni);
    }
    int k;
    scanf("%d",&k);
    while(v[k] != k){
      k = v[k];
    }
    printf("%d\n",k);
  }
  return 0;
}
