#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long a, b;
  string c;
  while(cin >> a >> c){
    unsigned long long int soma = 0;
    for(int i = 0; i < c.size(); i++){
      soma += c[i] - 48;
    }
    if(soma %3 == 0){
      cout << soma << " sim" << endl;
    }else{
      cout << soma << " nao" << endl;
    }
  }
  return 0;
}
