#include <bits/stdc++.h>

using namespace std;

typedef struct strings{
  string str;
  int size, ordem;
}strings;

bool comp(strings a, strings b){
  if(a.size > b.size)
    return true;
  if(a.size < b.size)
    return false;
  else{
    if(a.ordem < b.ordem)
      return true;
    else
      return false;
  }
}
int main(){
  int cases;
  string line;
  scanf("%d", &cases);
  getline(cin,line);
  for(size_t i = 0; i < cases; i++) {
    vector<strings> v;
    getline(cin,line);
    string aux;
    for(size_t j = 0; j < line.size(); j++) {
      if(line[j] != ' '){
        aux += line[j];
        //cout << aux;
      }
      else{
        //cout << endl << aux;
        strings aux1;
        aux1.str = aux;
        aux1.size = aux.size();
        aux1.ordem = j;
        v.push_back(aux1);
        aux.clear();
      }
    }
    strings aux1;
    aux1.str = aux;
    aux1.size = aux.size();
    aux1.ordem = line.size()  ;
    v.push_back(aux1);
    aux.clear();
    sort(v.begin(),v.end(),comp);
    for (int j = 0; j < v.size(); ++j){
      if(j == 0)
        cout << v[j].str;
      else
        cout << " " << v[j].str;
    }
    cout << endl;
  }
  return 0;
}
