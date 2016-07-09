#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int lista = 1;
  bool first = true;
  while(scanf("%d ",&n) != EOF){
      if(first){
        first = false;
      }else
        printf("\n");
      vector<char> v;
      vector<int> v1;
      vector<string> c;
      v.push_back('a');
      v1.push_back(0);
      for(char i = 'A'; i <= 'Z'; i++){
        v.push_back(i);
      }
      for(int i = 1; i < 27; i++){
        v1.push_back(i);
      }
      for(int i = 0; i < n; i++){
        string line, num = "",cc;
        getline(cin,line);
        line+=' ';
        cc = "";
        for (int j = 0; j < line.size(); j++) {
          if(line[j] == ' '){
            //cout << num << " ";
            int aux = atoi(num.c_str());
            if(aux == 27)
               cc += ' ';
             else{
               int y = v1[aux];
               char x = v[y];
               cc += x;
               v.erase(v.begin()+y);
               v.push_back(x);
               v1.erase(v1.begin()+aux);
               v1.push_back(y);
            }
            num = "";
          }else{
            num+=line[j];
          }
        }
        c.push_back(cc);
      }
      sort(c.begin(),c.end());
      printf("LISTA #%d:\n",lista++);
      for(int i = 0; i < c.size(); i++){
        cout << c[i] << endl;
      }
  }
  return 0;
}
