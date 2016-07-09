#include <bits/stdc++.h>

using namespace std;
int matriz[501][501];

int main(){
  int n, e;
  while(scanf("%d%d",&n,&e), n + e){
    //zerar matriz de adjacencia
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        matriz[i][j] = 99999;
      }
    }

    //criar a matriz de adjacencia
    for (int i = 0; i < e; i++) {
      int u,v,p;
      scanf("%d%d%d",&u,&v,&p);
      matriz[u][v] = p;
    }

    // // Print out final distance matrix
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++)
    //         cout << matriz[i][j] << " ";
    //     cout << endl;
    // }
    //
    // cout << endl;

    //altera o custo para os casos instantaneos
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if(matriz[i][j] != 99999 && matriz[j][i] != 99999){
          matriz[i][j] = 0;
          matriz[j][i] = 0;
        }
      }
    }

    // // Print out final distance matrix
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++)
    //         cout << matriz[i][j] << " ";
    //     cout << endl;
    // }
    //
    // cout << endl;

    //Floyd-Wharshal
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                if(matriz[i][j]>matriz[i][k]+matriz[k][j])
                    matriz[i][j]=matriz[i][k]+matriz[k][j];

    // // Print out final distance matrix
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++)
    //         cout << matriz[i][j] << " ";
    //     cout << endl;
    // }

    //consultas
    int k;
    scanf("%d\n", &k);

    for (int i = 0; i < k; i++) {
      int u, v;
      scanf("%d%d\n",&u,&v);

      if (matriz[u][v] != 99999) {
        printf("%d\n", matriz[u][v]);
      }else{
        printf("Nao e possivel entregar a carta\n");
      }
    }
    printf("\n");

  }
  return 0;
}
