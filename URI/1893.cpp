#include <bits/stdc++.h>

using namespace std;

int main(){
  int n1, n2;
  cin >> n1 >> n2;
  if(n1 < n2){
    if(n2 <= 2 && n2 >= 0)
      cout << "nova" << endl;
    else if(n2 <= 96 && n2 >= 3){
      cout << "crescente" << endl;
    }else if(n2 <= 100 && n2 >= 97){
      cout << "cheia" << endl;
    }
  }else if(n2 <= 96 && n2 >= 3){
    cout << "minguante" << endl;
  }else{
    if(n2 <= 2 && n2 >= 0)
      cout << "nova" << endl;
    else if(n2 <= 96 && n2 >= 3){
      cout << "crescente" << endl;
    }else if(n2 <= 100 && n2 >= 97){
      cout << "cheia" << endl;
    }
  }

  return 0;
}
