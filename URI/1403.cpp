#include <bits/stdc++.h>

using namespace std;

typedef struct jog{
  int score,id;
}jog;

bool comp(jog a, jog b){
  if(a.score == b.score){
    return a.id < b.id;
  }else{
    return a.score > b.score;
  }
}

int main(){
  int n,m;
  while(scanf("%d%d ",&n,&m), n+m){
    vector<jog> v;
    map <int,int> mm;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        int aux;
        scanf("%d",&aux);
        mm[aux]++;
      }
    }
    for(map<int,int>::iterator it = mm.begin(); it != mm.end(); it++){
      jog aux;
      aux.id = it->first;
      aux.score = it->second;
      v.push_back(aux);
    }
    sort(v.begin(),v.end(), comp);
    int segundo = v[1].score;
    for(int i = 1; i < v.size();i++){
      if(v[i].score < segundo){
        break;
      }else{
        printf("%d ",v[i].id);
      }
    }
    printf("\n");
  }
  return 0;
}
