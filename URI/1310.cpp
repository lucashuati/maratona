#include <bits/stdc++.h>

using namespace std;

int max_subarray(vector<int> v){
  int max_ending_here = 0, max_so_far = 0;
  for (int i = 0; i < v.size(); i++) {
    max_ending_here = max(0,max_ending_here + v[i]);
    max_so_far = max(max_so_far, max_ending_here);
  }
  return max_so_far;
}
int main(){
  int N, custo_dia;
  vector<int> dias;
  while (scanf("%d", &N) != EOF) {
    dias.clear();
    scanf("%d\n", &custo_dia);
    for (int i = 0; i < N; i++) {
      int aux;
      scanf("%d\n", &aux);
      dias.push_back(aux - custo_dia);
    }
    printf("%d\n", max_subarray(dias));
  }
  return 0;
}
