#include <bits/stdc++.h>

using namespace std;
typedef struct diamante{
  bool inicio,fim;
}diamante;


int main(){
  string mina;
  int cases;
  scanf("%d\n",&cases);
  stack<char> v;
  int qtd = 0;
  for (size_t i = 0; i < cases; i++) {
    cin >> mina;
    qtd = 0;
    while (!v.empty()) {
      v.pop();
    }
    for (size_t j = 0; j < mina.size(); j++) {
      if(mina[j] == '<'){
        v.push(mina[i]);
      }
      if(mina[j] == '>'){
        if(!v.empty()){
          v.pop();
          qtd++;
          //cout << j << endl;
        }
      }
    }
    cout << qtd << endl;
  }

  return 0;
}
