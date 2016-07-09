#include <bits/stdc++.h>

using namespace std;

int main(){
  string str;
  while(getline(cin,str)){
    stack<int> p;
    bool f = true;
    for (int i = 0; i < str.size(); i++) {
      if(str[i] == '(')
        p.push(str[i]);
      if(str[i] == ')'){
        if(p.empty()){
          cout << "incorrect" << endl;
          f = false;
          break;
        }
        else
          p.pop();
      }
    }
    if(f){
      if(p.empty())
        cout << "correct" << endl;
      else
        cout << "incorrect" << endl;
    }
  }
  return 0;
}
