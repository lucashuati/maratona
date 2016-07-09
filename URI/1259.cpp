#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n;
  int casos;
  scanf("%d",&casos);
  vector<long long int> pares, impares;
  for (size_t i = 0; i < casos; i++) {
    scanf("%lld",&n);
    if(n%2 == 0)
      pares.push_back(n);
    else
      impares.push_back(n);
  }
  sort(pares.begin(),pares.end());
  sort(impares.begin(),impares.end());

  for(int i = 0; i < pares.size(); i++){
    printf("%lld\n",pares[i]);
  }
  for(int i = impares.size()-1; i >= 0; i--){
    printf("%lld\n",impares[i]);
  }
  return 0;
}
