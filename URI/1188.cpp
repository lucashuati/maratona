#include <bits/stdc++.h>

using namespace std;

double matriz[12][12];

int main(){
  char O;
  scanf("%c",&O);
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      scanf("%lf\n",&matriz[i][j]);
    }
  }
  double soma = matriz[7][5] + matriz[7][6];
  soma+= matriz[8][4] + matriz[8][5] + matriz[8][6] + matriz[8][7];
  soma += matriz[9][3] + matriz[9][4] + matriz[9][5] + matriz[9][6] + matriz[9][7] + matriz[9][8];
  soma += matriz[10][2] + matriz[10][3] + matriz[10][4] + matriz[10][5] + matriz[10][6] + matriz[10][7] + matriz[10][8] + matriz[10][9];
  soma += matriz[11][1] + matriz[11][2] + matriz[11][3] + matriz[11][4] + matriz[11][5] + matriz[11][6] + matriz[11][7] + matriz[11][8] + matriz[11][9] + matriz[11][10];

  if(O == 'S')
    printf("%.1lf\n",soma);
  else
    printf("%.1lf\n",soma/30);
  return 0;
}
