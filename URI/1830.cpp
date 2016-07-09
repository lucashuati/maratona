#include <bits/stdc++.h>

using namespace std;

int main(){
  double X, Y, Z;
  int i = 0;
  while(scanf("%lf%lf%lf\n",&X,&Y,&Z) != EOF){
    if(X+Y+Z == 0)
      continue;
    double  num_croc, num_misto, num_trad;
    double sortidos, especial, predileta;
    X *= 1000;Y *= 1000;Z *= 1000;
    num_croc = round(X/5);
    Y -= num_croc*25;
    Z -= num_croc*20;
    num_misto = round(Y/25);
    Z -= num_misto*25;
    num_trad = Z/50;

    sortidos = round(num_trad/10);
    num_misto -= sortidos*10;
    num_croc -= sortidos*10;

    predileta = round(num_misto/20);
    num_croc -= predileta*10;

    especial = round(num_croc/30);

    printf("Caso #%d: %.0lf Especial, %.0lf Predileta e %.0lf Sortida\n",++i,especial,predileta,sortidos);

  }
  return 0;
}
