#include <bits/stdc++.h>

using namespace std;

int main(){
  string str1, str2;
  while (getline(cin,str1)) {
    getline(cin,str2);
    bool fim = false;
    for (size_t i = str1.size(); i >= 0; i--) {
      for (size_t j = 0; j + i <= str1.size(); j++) {
          string sub = str1.substr(j,i);
          size_t find = str2.find(sub);
          //cout << sub << endl;
          if(find != string::npos){
            printf("%d\n",(int)sub.size());
            fim = true;
            break;
          }
      }
      if(fim)
        break;
    }
    if(!fim)
      printf("0\n");
  }
  return 0;
}
