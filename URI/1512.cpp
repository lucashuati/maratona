#include <bits/stdc++.h>

using namespace std;

long long int MDC(long long int a, long long int b){

    if(b>a){
      return MDC(b,a);
    }
    long long int f = a%b;
    if(f == 0){
      return b;
    }
    else{
      return MDC(b,f);
    }
}

int main(){
  long long int n,a,b;

  while (scanf("%lld%lld%lld",&n,&a,&b),a+b+n) {
    long long int x = a*b/MDC(a,b);
    printf("%lld\n",n/a + n/b - n/x );
  }
  return 0;
}
