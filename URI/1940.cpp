#include <bits/stdc++.h>

using namespace std;
int main(){
  int J, R;
  scanf("%d%d\n",&J, &R);
  int v[600] = {0};
  for(int i = 0; i < R; i++){
    for (size_t j = 0; j < J; j++) {
      int aux ;
      scanf("%d\n",&aux);
      v[j] += aux;
    }
  }
  int maior = -1, vencedor = -1;

  for (int i = J-1; i >= 0; i--) {
    if(v[i] > maior){
      maior = v[i];
      vencedor = i+1;
    }
  }
  cout << vencedor << endl;
  return 0;
}
