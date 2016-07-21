#include <bits/stdc++.h>

using namespace std;

int main(){
  int idade;
  double total = 0, q = 0;
  while(cin >> idade, idade > 0){
    total += idade;
    q++;
  }
  printf("%.2lf\n",total/q);
  return 0;
}
