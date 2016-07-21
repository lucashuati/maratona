#include <bits/stdc++.h>

using namespace std;

typedef struct pr{
  int tempo;
  bool ac;
}probl;
int main(){
  int subs;
  while(cin >> subs, subs){
    vector<probl> v;
    for(char i = 'A'; i <= 'Z'; i++){
      probl aux;
      aux.tempo = 0;
      aux.ac = false;
      v.push_back(aux);
    }
    int c = 0, tempo = 0;
    for(int i = 0; i < subs; i++){
      char l;
      int t;
      string r;
      cin >> l >> t >> r;
      if(!v[l-'A'].ac){
        if(r == "correct"){
          tempo += v[l-'A'].tempo + t;
          c++;
          v[l-'A'].ac = true;
        }else{
          v[l-'A'].tempo += 20;
        }
      }
    }
    cout << c << " " << tempo << endl;
  }
  return 0;
}
