#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin >> n){
    int espacos = 0, linhas = 0;
    if(!(n%2)){
      espacos++;
    }
    int i = 1;
    while(i <= n){
      linhas++;
      i += 2;
    }
    int aux = linhas + espacos - 1;
    for(int i = 0, l = 1; i < linhas; i++, l+=2){
      for(int j = 0; j < aux; j++){
        cout << " ";
      }
      for(int k = 0; k < l; k++){
        cout << "*";
      }
      aux--;
      cout << endl;
    }
    int aux2 = n + espacos;
    int l1 = aux2/2, l2 = aux2%2;
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < l1; j++){
        cout << " ";
      }
      for(int j = 0; j < l2; j++){
        cout << "*";
      }
      cout << endl;
      l1--;
      l2 +=2;

    }
    cout << endl;

  }
  return 0;
}
