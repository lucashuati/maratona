#include <bits/stdc++.h>

using namespace std;

int main(){
  char op;
  cin >> op;
  double soma = 0;
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      double aux;
      cin >> aux;
      if(j == 7 && i > 4 && i < 7){
        soma += aux;
      }else if(j == 8 && i > 3 && i < 8){
        soma += aux;
      }else if(j == 9 && i > 2 && i < 9){
        soma += aux;
      }else if(j == 10 && i > 1 && i < 10){
        soma += aux;
      }else if(j == 11 && i > 0 && i < 11){
        soma += aux;
      }
    }
  }
  if(op == 'S'){
    printf("%.1lf\n",soma);
  }else{
    printf("%.1lf\n",soma/30.00);
  }
  return 0;
}
