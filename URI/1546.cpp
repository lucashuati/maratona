#include<bits/stdc++.h>

using namespace std;
void f(int i){
  if(i == 1)
    cout << "Rolien" << endl;
    if(i == 2)
      cout << "Naej" << endl;
      if(i == 3)
        cout << "Elehcim" << endl;
        if(i == 4)
          cout << "Odranoel" << endl;
}
int main(){
  int casos;
  scanf("%d",&casos);
  while (casos--) {
    int k;
    scanf("%d",&k);
    while(k--){
      int i;
      scanf("%d",&i);
      f(i);
    }
  }
  return 0;
}
