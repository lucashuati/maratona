#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int p = 0, i = 0, ps = 0, ne = 0;
  double total = 0;
  while(cin >> n){
    if(n % 2 == 0){
      p++;
    }else{
      i++;
    }
    if(n > 0){
      ps++;
    }else if(n<0){
      ne++;
    }
  }
  printf("%d valor(es) par(es)\n",p);
  printf("%d valor(es) impar(es)\n",i);
  printf("%d valor(es) positivo(s)\n",ps);
  printf("%d valor(es) negativo(s)\n",ne);
  return 0;
}
