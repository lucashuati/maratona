#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases;
  scanf("%d\n", &cases);
  for (int i = 0; i < cases; i++) {
    long long int n;
    scanf("%lld\n", &n);
    long long int x = sqrt(n);
    bool primo = true;
    while (x > 1) {
      if(n%x == 0){
        printf("Not Prime\n");
        primo = false;
        break;
      }
      x--;
    }
    if(primo)
      printf("Prime\n");
  }

  return 0;
}
