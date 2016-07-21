#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  cin >> c;
  while(c--){
    string aux;
    cin >> aux;
    double resp = (double)aux.size()/100.00;
    printf("%.2lf\n",resp);
  }
  return 0;
}
