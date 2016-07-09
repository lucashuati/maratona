#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases, caso = 1 ;
  scanf("%d",&cases);
  while(cases--){
    int n;
    scanf("%d",&n);
    vector<int> v;
    int maior = 0;
    for (int i = 0; i < n; i++) {
      int a;
      scanf("%d",&a);
      v.push_back(a);
      maior = max(maior,v[i]);
    }
    int seq = 1, seq1 = 0;
    //cout << maior << endl;
    for (int i = 0; i < n-1; i++) {
      //cout << seq << endl;
      if(maior == v[i] && v[i] == v[i+1]){
        seq++;
      }
      else{
        seq1 = max(seq1,seq);
        seq = 1;
      }
    }
    seq1 = max(seq1,seq);
    printf("Caso #%d: %d\n",caso++, seq1  );
    //cout << seq << endl;
  }
  return 0;
}
