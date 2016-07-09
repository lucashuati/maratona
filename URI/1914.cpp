#include <bits/stdc++.h>

using namespace std;

int main(){
  int qt;
  scanf("%d",&qt);
  while(qt--){
    string j1,j2, escolhaj1,escolhaj2;
    cin >> j1 >> escolhaj1 >> j2 >> escolhaj2;
    long long int v1,v2;
    cin >> v1 >> v2;
    if((v1 + v2)%2 == 0){
      if(escolhaj1 == "PAR")
        cout << j1 << endl;
      else
        cout << j2 << endl;
    }else{
      if(escolhaj2 == "PAR")
        cout << j1 << endl;
      else
        cout << j2 << endl;
    }

  }
  return 0;
}
