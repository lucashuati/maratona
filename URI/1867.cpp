#include <bits/stdc++.h>

using namespace std;

int main(){
  string a,b;
  while(cin >> a >> b, a != "0" || b != "0" ){
    long long int soma1,soma2;
      soma1 =0;
      for(int i = 0; i < a.size(); i++){
        soma1 += a[i]-48;
        if(soma1 >= 10){
          soma1 = soma1/10+soma1%10;
        }
      }
      soma2 = 0;
      for(int i = 0; i < b.size(); i++){
        soma2 += b[i]-48;
        if(soma2 >= 10){
          soma2 = soma2/10+soma2%10;
        }
      }
    if(soma1 == soma2){
      printf("0\n");
    }else if(soma1 > soma2){
      printf("1\n");
    }else{
      printf("2\n");
    }
  }
  return 0;
}
