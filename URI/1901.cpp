#include <bits/stdc++.h>

using namespace std;
int matriz[201][201];
int main(){
  int n;
  scanf("%d",&n);
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 1; j <= n; j++) {
        scanf("%d",&matriz[i][j]);
    }
  }
  set<int> se;
  for (int i = 0; i < n*2; i++) {
    int aux1, aux2;
    scanf("%d%d",&aux1,&aux2);
    se.insert(matriz[aux1][aux2]);
  }

  cout << se.size() << endl;



  return 0;
}
