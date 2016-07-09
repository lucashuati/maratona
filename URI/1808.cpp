#include <bits/stdc++.h>

using namespace std;

int main(){
  string str;
  cin >> str;
  int total_nota = 0, total_provas = 0;
  for(int i = 0; i < str.size(); i++){
    if(str[i] == '1'){
      if(i+1 < str.size() && str[i+1] == '0' ){
        total_nota+= 10;
        total_provas++;
        i++;
      }else{
        total_nota+= 1;
        total_provas++;
      }
    }else{
      if(str[i] == '2'){
        total_nota+= 2;
        total_provas++;
      }
      if(str[i] == '3'){
        total_nota+= 3;
        total_provas++;
      }
      if(str[i] == '4'){
        total_nota+= 4;
        total_provas++;
      }
      if(str[i] == '5'){
        total_nota+= 5;
        total_provas++;
      }
      if(str[i] == '6'){
        total_nota+= 6;
        total_provas++;
      }
      if(str[i] == '7'){
        total_nota+= 7;
        total_provas++;
      }
      if(str[i] == '8'){
        total_nota+= 8;
        total_provas++;
      }
      if(str[i] == '9'){
        total_nota+= 9;
        total_provas++;
      }
    }
  }
  double resp = (double)total_nota/(double)total_provas;
  printf("%.2lf\n",resp);
  return 0;
}
