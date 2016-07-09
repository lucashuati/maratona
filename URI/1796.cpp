#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int y = 0,na = 0;
  scanf("%d",&n);
  for(int i = 0; i < n;i++){
    int x;
    scanf("%d",&x);
    if(x == 1){
      na++;
    }else{
      y++;
    }
  }
  if(y > na){
    cout << "Y" << endl;
  }else{
    cout << "N" << endl;
  }
  return 0;
}
