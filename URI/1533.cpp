#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(scanf("%d",&n),n){
    int m1 =-1,m2=-1;
    int p1,p2;
    vector<int> a;
    for(int i = 0; i < n;i++){
      int aux;
      scanf("%d",&aux);
      a.push_back(aux);
      if(m1 < aux){
        p1 = i;
        m1 = aux;
      }
    }
    for(int i = 0; i < n;i++){
      if(i != p1){
        if(m2 < a[i]){
          m2 = a[i];
          p2 = i;
        }
      }
    }
    cout << p2+1 << endl;
  }
}
