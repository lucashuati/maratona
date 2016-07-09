#include <bits/stdc++.h>

using namespace std;
std::vector<long long int> v;
void fib(){
  long long int anterior2=1;
  v.push_back(1);
  v.push_back(2);

   long long int anterior1=2;
   //printf ("%d ",anterior1);

   long long int numero;
   for (int i=2; i<40; ++i){
     numero=anterior2+anterior1;
     v.push_back(numero);
     anterior2=anterior1;
     anterior1=numero;
   }
 }
 //cout << fib2 << endl;
 //return fib2;


int main(){
    int x;
    fib();
    while(scanf("%d", &x), x){
      cout << v[x-1] << endl;
      //cout << fib(x) << endl;
    }
}
