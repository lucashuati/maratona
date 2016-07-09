#include<bits/stdc++.h>

using namespace std;

int main(){
  int casos;
  scanf("%d\n",&casos);
  while(casos--){
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    int time2 = str1[str2.size()-1] - 48 + str2[0] - 48;
    int time1 = str1[0] - 48 + str2[str2.size()-1] - 48;
    int time1_fora = str2[str2.size()-1] - 48;
    int time2_fora = str1[str2.size()-1] - 48;

    if(time2 == time1){
      if(time1_fora == time2_fora)
        cout << "Penaltis" << endl;
      else if(time1_fora > time2_fora){
        cout << "Time 1" << endl;
      }else{
        cout << "Time 2" << endl;
      }
    }else{
      if(time1 > time2){
        cout << "Time 1" << endl;
      }else{
        cout << "Time 2" << endl;
      }
    }
  }
  return 0;
}
