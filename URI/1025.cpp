#include <bits/stdc++.h>

using namespace std;
int pos = -1;
vector<int> v;
void binarysearch(int n,int s, int f,bool ac){
  int i =  (s+f)/2;
  if(s > f)
    return;
  if(n == v[i] && !ac){
    ac = true;
    pos =  i;
  }else{
    if(n < v[i]){
      f = i-1;
      binarysearch(n,s,f,ac);
    }else{
      s = i+1;
      binarysearch(n,s,f,ac);
    }
  }
}
int main(){
  int n,q, caso = 1;
  while(scanf("%d%d",&n,&q),n+q){
    printf("CASE# %d:\n",caso++);
    v.clear();
    //v.push_back(0);
    while(n--){
      int aux;
      scanf("%d",&aux);
      v.push_back(aux);
    }
    sort(v.begin(),v.end());
    while(q--){
      int aux;
      scanf("%d",&aux);
      pos = -1;
      binarysearch(aux,0,v.size(),false);
      if(pos == -1)
        printf("%d not found\n",aux);
      else{
        int k = pos;
        for(int i = k; v[i] == aux; i--){
          pos--;
        }
        pos++;
        printf("%d found at %d\n",aux,pos+1);
      }

    }
  }
  return 0;
}
