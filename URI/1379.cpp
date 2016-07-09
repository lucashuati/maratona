#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a,b;
  while(cin >> a >> b, a+b){
    int dif = abs(a-b);
    int me = min(a,b);
    cout << me-dif << endl;
  }
  return 0;
}
