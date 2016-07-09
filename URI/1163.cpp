#include <bits/stdc++.h>

using namespace std;

// #define g 9.80665
// #define pi 3.14159
double g = 9.80665;
double pi = 3.14159;
int main(){
  long double ho,p1,p2,n;

  while(cin >> ho >> p1 >> p2 >> n){
    while(n--){
      long double alfa,Vo;
      cin >> alfa >> Vo;
      //cout << alfa << endl;
      long double rad = (alfa*pi)/180;
      //cout << rad << endl;
      long double voy = (sin(rad)*Vo);
      long double vox = (cos(rad)*Vo);
      long double tempo = voy + sqrt((voy*voy) + 2*g*ho);
      tempo /= g;
      //cout << tempo << endl;
      long double d = vox * tempo;
      // cout << vox << endl;
      // printf("%.5Lf\n",d);
      if(d >= p1 && d <= p2){
        printf("%.5Lf -> DUCK\n",d);
      }else{
        printf("%.5Lf -> NUCK\n",d);
      }
    }
  }
  return 0;
}
