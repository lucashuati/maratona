#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  int v[3] = {0,0,0};
  while(1) {
    scanf("%d\n",&t);
    if(t == 4)
      break;
    if(t < 1 || t > 4)
      continue;
    if(t == 1)
      v[0]++;
    if(t == 2)
      v[1]++;
    if(t == 3)
      v[2]++;
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << v[0] << endl;
  cout << "Gasolina: " << v[1] << endl;
  cout << "Diesel: " << v[2] << endl;
  return 0;
}
