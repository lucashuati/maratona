#include <bits/stdc++.h>

using namespace std;

int main(){
  double n;
  int pos = 0;
  double total = 0;
  while(cin >> n){
    if(n > 0){
      pos++;
      total += n;
    }
  }
  cout << pos << " valores positivos" << endl;
  printf("%.1lf\n",total / pos);
  return 0;
}
