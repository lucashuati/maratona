#include <bits/stdc++.h>

using namespace std;

int main(){
  int cases;
  scanf("%d",&cases);
  while(cases--){
    string s1, s2;
    cin >> s1 >> s2;
    int v = 0;
    if(s1 == "tesoura" && s2 == "papel")
      v = 1;
    else if(s2 == "tesoura" && s1 == "papel")
      v = 2;
    else if(s1 == "papel" && s2 == "pedra")
      v = 1;
    else if(s2 == "papel" && s1 == "pedra")
      v = 2;
      else if(s1 == "pedra" && s2 == "lagarto")
        v = 1;
      else if(s2 == "pedra" && s1 == "lagarto")
        v = 2;
        else if(s1 == "lagarto" && s2 == "spock")
          v = 1;
        else if(s2 == "lagarto" && s1 == "spock")
          v = 2;
          else if(s1 == "spock" && s2 == "tesoura")
            v = 1;
          else if(s2 == "spock" && s1 == "tesoura")
            v = 2;
            else if(s1 == "tesoura" && s2 == "lagarto")
              v = 1;
            else if(s2 == "tesoura" && s1 == "lagarto")
              v = 2;
              else if(s1 == "lagarto" && s2 == "papel")
                v = 1;
              else if(s2 == "lagarto" && s1 == "papel")
                v = 2;
                else if(s1 == "papel" && s2 == "spock")
                  v = 1;
                else if(s2 == "papel" && s1 == "spock")
                  v = 2;
                  else if(s1 == "spock" && s2 == "pedra")
                    v = 1;
                  else if(s2 == "spock" && s1 == "pedra")
                    v = 2;
                    else if(s1 == "pedra" && s2 == "tesoura")
                      v = 1;
                    else if(s2 == "pedra" && s1 == "tesoura")
                      v = 2;
        if(v == 1){
          std::cout << "rajesh" << std::endl;
        }else if(v == 2){
          std::cout << "sheldon" << std::endl;
        }else{
          std::cout << "empate" << std::endl;
        }
  }
  return 0;
}
