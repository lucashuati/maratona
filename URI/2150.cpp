#include <bits/stdc++.h>

using namespace std;
int indice(char c){
  if(c >= 'a' && c <= 'z'){
    return c - 'a';
  }else{
    return 26 + c - '0';
  }
}

int main(){
  vector<int> v(36,0);
  string vo;
  string line;
  while (cin >> vo) {
    getchar();
    getline(cin,line);
    vector<int> v(36,0);
    for(int i = 0; i < vo.size(); i++){
      v[indice(vo[i])] = 1;
    }
    int cont = 0;
    for(int i = 0; i < line.size(); i++){
      if(line[i] >= 'a' && line[i] <= 'z'){
        if(v[indice(line[i])])
          cont++;
      }else if(line[i] >= '0' && line[i] <= '9'){
        if(v[indice(line[i])])
          cont++;
      }
    }
    cout << cont << endl;
  }
  return 0;
}
