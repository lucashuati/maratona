#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases;
  scanf("%d", &cases);
  bool f = true;
  while(cases--){
    if(f){
      f = false;
    }else
      cout << endl;
    int m, c;
    vector<int> v[100];
    scanf("%d%d ",&m,&c);
    for(int i = 0; i < c; i++){
      int a;
      scanf("%d",&a);
      v[a%m].push_back(a);
    }
    for(int i = 0; i < m; i++){
      printf("%d ",i);
      for(int j = 0; j < v[i].size(); j++){
        printf("-> %d ",v[i][j]);
      }
      printf("-> \\\n");
    }
    //cout << endl;
  }
  return 0;
}
