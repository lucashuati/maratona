#include <bits/stdc++.h>

using namespace std;

int v[43342] = {0};

vector<int> primes;

void crivo(){
  for(int i = 2; i < 43342; i++){
    if(!v[i]){
      primes.push_back(i);
      for(int j = i; j < 43342; j+=i){
        v[j] = 1;
      }
    }
  }
}

int coprimes(int n){
  int resp = 1;
  for(int i = 0; i < primes.size(); i++){
    if(!(n%primes[i])){
      int c = -1;
      while(!(n%primes[i])){
        c++;
        n /= primes[i];
      }
      resp *= ((primes[i]-1) * pow(primes[i],c));
    }
  }
  if(n != 1){
      resp *= (n-1);
  }
  resp /= 2;
  return resp;
}

int main(){
  int n;
  crivo();
  while(scanf("%d",&n) == 1){
      printf("%d\n",coprimes(n));
  }
  return 0;
}
