#include <bits/stdc++.h>

using namespace std;

#define esq 1
#define cima 2
#define dir 3
#define baixo 4

void imprime(int posx, int posy, int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == posx && j == posy){
        cout << 'X';
      }else{
        cout << 'O';
      }
    }
    cout << endl;
  }
}

int main(){
  int n;
  int v[4] = {dir,cima,esq,baixo};
  while(cin >> n, n){
      char matriz[n][n];
      int posx = n/2, posy = n/2;
      imprime(posx,posy,n);
      cout << "@" << endl;
      int vezes = 1, ind = 0;
      for(int i = 0;;){
        for(int j = 0; j < 2; j++){
          //cout << vezes << endl;
          for(int k = 0; k < vezes; k++,i++){
            if(i == n*n - 1)
              break;
            if(v[ind] == esq){
              posy--;
            }else if(v[ind] == cima){
              posx--;
            }else if(v[ind] == dir){
              posy++;
            }else{
              posx++;
            }
            imprime(posx,posy,n);
            cout << "@" << endl;
          }
          ind++;
          ind %= 4;
          if(i == n*n - 1)
            break;
        }
        vezes++;
        if(i == n*n - 1)
          break;
      }

  }
  return 0;
}
