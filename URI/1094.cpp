#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases, coelhos = 0, ratos = 0, sapos = 0, total = 0;
  scanf("%d", &cases);
  while (cases--) {
    string x; int n;

    cin >> n >> x;
    //cout << n << x << endl;
    if(x == "C"){
      coelhos += n;
    }else if(x == "R"){
      ratos += n;
    }else{
      sapos += n;
    }
    total += n;
  }
  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << coelhos << endl;
  cout << "Total de ratos: " << ratos << endl;
  cout << "Total de sapos: " << sapos << endl;

  printf("Percentual de coelhos: %.2lf %%\n",(double)coelhos/(double)total*100);
  printf("Percentual de ratos: %.2lf %%\n",(double)ratos/(double)total*100);
  printf("Percentual de sapos: %.2lf %%\n",(double)sapos/(double)total*100);




  return 0;
}
