#include <bits/stdc++.h>

using namespace std;

int main(){
  string line1,line2,line3,line4;
  cin >> line1 >> line2 >> line3 >> line4;
  string F;
  F += line1[0];
  F += line2[0];
  F += line3[0];
  F+= line4[0];
  string L;
  L += line1[line1.size()-1];
  L += line2[line1.size()-1];
  L += line3[line1.size()-1];
  L += line4[line1.size()-1];
  vector<string> m;
  for (int i = 1; i < line1.size()-1; i++) {
    string aux;
    aux+= line1[i];
    aux+= line2[i];
    aux+= line3[i];
    aux+= line4[i];

    m.push_back(aux);
  }

  string::size_type sz;
  int l = stoi(L,&sz);
  //cout << l << endl;
  //string::size_type sz;
  int f = stoi(F,&sz);
  //cout << f << endl;
  for (int i = 0; i < m.size(); i++) {
    int M = stoi(m[i],&sz);
    //cout << m[i] << endl;
    int C = (f*M+l)%257;
    printf("%c",C);
  }
  cout << endl;


  return 0;
}
