#include <bits/stdc++.h>

using namespace std;

char x[4] = {'N','L','S','O'};

int main(){
  int n;

  while (scanf("%d",&n), n) {
    int pos = 0;
    string c;
    cin >> c;
    for (int i = 0; i < c.size(); i++) {
      if(c[i] == 'D'){
        if(pos == 3)
          pos = 0;
        else
          pos++;
      }else{
        if(pos == 0)
          pos = 3;
        else
          pos--;
      }
    }
    cout << x[pos] << endl;

  }
  return 0;
}
