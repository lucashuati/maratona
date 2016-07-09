#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
      string str = "3";
      int cont = 1;
      for(int j = 1; j < n; j++){
        string aux = "";
        for(int i = str.size()-1; i > 0; i--){
          if(str[i] == str[i-1]){
            cont++;
          }else{
            string str2="";
            string str3 = "";
            str3 += str[i];
            char c = (char)cont + 48;
            str2 += c;
            cont = 1;
            aux.insert(0,str3);
            aux.insert(0,str2);
          }
        }
        string str2="";
        string str3 = "";
        str3 += str[0];
        char c = (char)cont + 48;
        str2 += c;
        cont = 1;
        aux.insert(0,str3);
        aux.insert(0,str2);
        str = aux;
      }
      cout << str << endl;
    }

    return 0;
}
