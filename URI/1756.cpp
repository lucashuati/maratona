#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;
  cin >> c;
  while(c--){
    int n,corte;
    double p;
    cin >> n >> corte >> p;
    string a,b,c,d,e;
    int na = 0,ra = 0,nb = 0, rb = 0;
    cin >> a >> b >> c;
    for(int i = 0; i < corte; i++){
      if(a[i] == c[i]){
        na++;
      }else{
        ra++;
      }
      if(b[i] == c[i]){
        nb++;
      }else{
        rb++;
      }
    }
    for(int i = corte; i < n; i++){
      if(b[i] == c[i]){
        na++;
      }else{
        ra++;
      }
      if(a[i] == c[i]){
        nb++;
      }else{
        rb++;
      }
    }
    double pA = pow(p,(double)ra) * pow(1-p,(double)na);
    double pB = pow(p,(double)rb) * pow(1-p,(double)nb);
    double PUA = pA + pB - (pA*pB);
    printf("%.7lf\n",PUA);

  }
  return 0;
}
