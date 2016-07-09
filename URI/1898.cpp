#include <bits/stdc++.h>

using namespace std;

int main(){
  string linha1, linha2, x, y;
  int cpf = 0;
  int decimal = -1;
  getline(cin,linha1);
  getline(cin,linha2);

  printf("cpf ");

  for (size_t i = 0; i < linha1.size(); i++) {
    if(isdigit(linha1[i]) && cpf < 11){
      cpf++;
      printf("%c", linha1[i]);
    }else{
      if(isdigit(linha1[i]) && decimal == -1){
        x += linha1[i];
      }else{
        if(linha1[i] == '.'){
          decimal = 0;
        }else{
          if(isdigit(linha1[i]) && decimal >= 0 && decimal <= 1){
            y += linha1[i];
            decimal++;
          }
        }
      }
    }
  }
  string resposta;
  if(x.size() == 0)
    x = "0";
  if(y.size() == 0)
    y = "0";
  resposta = x + '.' + y;
  printf("\n");
  decimal = -1;
  x.clear();
  y.clear();
  double r1 = stod(resposta);
  for (size_t i = 0; i < linha2.size(); i++) {
    if(isdigit(linha2[i]) && decimal == -1){
      x += linha2[i];
    }else{
      if(linha2[i] == '.'){
        decimal = 0;
      }else{
        if(isdigit(linha2[i]) && decimal >= 0 && decimal <= 1){
          y += linha2[i];
          decimal++;
        }
      }
    }
  }
  resposta = x + '.' + y;
  double r2 = stod(resposta);
  //printf("%.2lf + %.2lf = %.2lf\n",r1,r2,r1+r2);
  printf("%.2lf\n",r1+r2);

  return 0;
}
