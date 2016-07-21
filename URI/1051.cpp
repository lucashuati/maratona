#include <bits/stdc++.h>

using namespace std;

int main(){
  double n;
  cin >> n;
  double a,b,c, t = 0;
  a = n - 4500;
  b = n - 3000;
  c = n - 2000;
  //cout << a << " " << b << " " << c << endl;
  if(a > 0){
    t += a * 0.28;
  }
  if(b > 0 && b <= 1500.00){
    t += b * 0.18;
  }else if(b > 1500.00){
    b = 1500.00;
    t += b * 0.18;
  }
  if(c > 0 && c <= 1000.00){
    t += c * 0.08;
  }else if(c > 1000.00){
    c = 1000.00;
    t += c * 0.08;
  }
  if(t > 0)
    printf("R$ %.2lf\n",t);
  else
    cout << "Isento" << endl;
  return 0;
}
