#include <bits/stdc++.h>

using namespace std;

void verifica(string x){
  //cout << x << endl;
  long long int li_dec = atoll(x.c_str());
  /*char *t = x;
  cout << t << endl;
  for (int i = 0, j = 0; i < x.size(); i++, j*=10) {
    //int a = atoi(x[i].c_str());
    li_dec += a*j;
  }*/
  if(li_dec > 2147483647 || li_dec < 0)
    cout << "error" << endl;
  else
    cout << li_dec << endl;

}
string retira_zeros(string x){
  if(x.size() == 0)
    return x;
  string r = "";
  bool esq = true;
  for (size_t i = 0; i < x.size(); i++) {
    if(x[i] == '0' && esq){
      continue;
    }else
      esq = false;
    if(esq == false)
      r += x[i];
  }
  if(r.size() == 0)
    return r+='0';
  return r;
}
int main(){
  string line;
  while(getline(cin,line)){
    string x = "";
    bool e = false;
    for (int i = 0; i < line.size(); i++) {
      if(line[i] == 'o' || line[i] == 'O')
        x += '0';
      else if(line[i] == 'l')
        x += '1';
      else if(line[i] >= '0' && line[i] <= '9')
        x += line[i];
      else if(line[i] != ' ' && line[i] != ','){
        e = true;
      }
    }
    //cout << x << endl;
    //x = retira_zeros(x);
    if(x.size() == 0 || e)
      cout << "error" << endl;
    else{
      verifica(x);
    }
  }
  return 0;
}
