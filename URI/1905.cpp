#include <bits/stdc++.h>

using namespace std;
int matriz[5][5];
bool robbers = false;
void back_tracking(int matriz[5][5], int lin, int col, bool dir, bool desc){
  //cout << "estou na pos (" << lin << "," << col <<")" << endl;
  if(lin == 4 && col == 4)
    robbers = true;
  //direita
  if(dir && col + 1 < 5 && matriz[lin][col+1] == 0){
    matriz[lin][col] = 1;
    back_tracking(matriz, lin,col+1,true,true);
  }
  //baixo
  if(desc && lin + 1 < 5 && matriz[lin+1][col] == 0){
    matriz[lin][col] = 1;
    back_tracking(matriz, lin+1,col,true,true);
  }
  //esquerda
  if(col-1 > -1 && matriz[lin][col-1] == 0){
    matriz[lin][col] = 1;
    back_tracking(matriz, lin,col-1, false,true);
  }
  //cima
  if(lin-1 > -1 && matriz[lin-1][col] == 0){
    matriz[lin][col] = 1;
    back_tracking(matriz, lin-1,col, true,false);
  }
}

int main(){
  int T;
  scanf("%d", &T);
  for (int t = 0; t < T; t++) {
    robbers = false;
    for(int i = 0; i < 5; i++){
      for(int j = 0 ;j <  5; j++){
        scanf("%d", &matriz[i][j]);
      }
    }
    back_tracking(matriz,0,0, true, true);

    if(!robbers)
      printf("ROBBERS\n");
    else
      printf("COPS\n");
  }

  return 0;
}
