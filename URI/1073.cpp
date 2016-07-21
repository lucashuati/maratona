#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n;
  cin >> n;
  for(long long int i = 2;i <= n; i+=2){
    printf("%lld^2 = %lld\n",i,i*i);
  }
  return 0;
}
