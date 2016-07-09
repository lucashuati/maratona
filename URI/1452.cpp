#include <bits/stdc++.h>

using namespace std;
pair <int,int> pp;
bool usado[201];
map<string,vector<int> > mm;
int main(){
  int n,m;
  while(scanf("%d%d",&n,&m),n+m){
    mm.clear();
    memset(usado,false,sizeof(usado));
    for (int i = 1; i <= n; i++) {
      int qtd;
      scanf("%d",&qtd);
      for(int j = 0; j < qtd; j++){
        string str;
        cin >> str;
        mm[str].push_back(i);
      }
    }
    int total = 0;
    int retirar = 0;
    for (int i = 0; i < m; i++) {
      int qtd;
      scanf("%d",&qtd);
      memset(usado,false,sizeof(usado));
      for(int j = 0; j < qtd; j++){
        string str;
        cin >> str;
        //cout << str << " ";
        for(int k = 0; k < mm[str].size(); k++){
          if(!usado[mm[str][k]]){
            //cout << mm[str][k] << " ";
            usado[mm[str][k]] = true;
            total++;
          }
        }
        //cout << endl;

      }
    }
    printf("%d\n",total);
  }
  return 0;
}
