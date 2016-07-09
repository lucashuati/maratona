#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases;
  scanf("%d\n",&cases);
  for (size_t i = 0; i < cases; i++) {
    int n;
    scanf("%d",&n);
    string str;
    cin >> str;
    if(str.size() == 1){
      long long int r = 1,s = n;
      while(s > 1){
        r *= s;
        s--;
      }
      printf("%lld\n",r);
    }else{
      long long int t = 1, m = 0;
      long long int x = n - (m*str.size());
      while(x >= 1){
        t *= n-m*str.size();
        m++;
        x = n - (m*str.size());
      }
      printf("%lld\n", t);
    }
  }
  return 0;
}
