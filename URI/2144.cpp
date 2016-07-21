#include <bits/stdc++.h>

using namespace std;

int main(){
  int w1,w2,r;
  double total = 0, cont = 0;
  while(cin >> w1 >> w2 >> r,w1+w2+r){
    cont++;
    double menor = double(w1+w2)/2;
    double M = (double)menor*(1.0 + ((double)r/30.0));
    //cout << M << endl;
    total += M;
    if(M < 13){
      cout << "Nao vai da nao" << endl;
    }else if(M < 14){
      cout << "E 13" << endl;
    }else if(M < 40){
      cout << "Bora, hora do show! BIIR!" << endl;
    }else if(M <= 60){
      cout << "Ta saindo da jaula o monstro!" << endl;
    }else{
      cout << "AQUI E BODYBUILDER!!" << endl;
    }
  }
  if(total/cont > 40.0000){
    cout << endl << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
  }
  return 0;
}
