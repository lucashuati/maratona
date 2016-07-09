#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  vector<int> v;
  while(n--){
    int aux;
    scanf("%d",&aux);
    v.push_back(aux);
  }
  sort(v.begin(),v.end());
  int cont = 1;
  for(int i = 0; i < v.size()-1; i++){
    if(v[i] == v[i+1]){
      cont++;
    }else{
      cout << v[i] << " aparece " << cont << " vez(es)" << endl;
      cont = 1;
    }
  }
  cout << v[v.size()-1] << " aparece " << cont << " vez(es)" << endl;
  return 0;
}
