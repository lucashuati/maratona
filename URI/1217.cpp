#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases, d = 1;
  double totalmoney = 0, totalkg = 0;
  scanf("%d",&cases);
  while(cases--){
    int kqdia = 1;
    double x;
    cin >> x;
    getchar();
    totalmoney += x;
    string l;
    getline(cin,l);
    for(int i = 0; i < l.size(); i++){
      if(l[i] == ' ')
        kqdia++;
    }
    totalkg += kqdia;
    //cout << "day " << d++ <<": " << kqdia << "kg" << endl;
    printf("day %d: %d kg\n",d++,kqdia);
  }
  d--;
  printf("%.2lf kg by day\n",totalkg/d);
  printf("R$ %.2lf by day\n",totalmoney/d);

  return 0;
}
