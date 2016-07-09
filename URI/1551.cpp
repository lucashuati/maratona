#include <bits/stdc++.h>

using namespace std;

int main(){
  int casos;
  scanf("%d\n",&casos);
  for(int i = 0; i < casos; i++){
    string str;
    getline(cin,str);
    int v[26] = {0};
    for (size_t j = 0; j < str.size(); j++) {
      if(str[j] >= 'a' && str[j] <= 'z'){
        int ind = str[j]-97;
        v[ind] = 1;
        //cout << ind << endl;
      }
    }

    int t = 0;
    for (size_t j = 0; j < 26; j++) {
      t += v[j];
      //cout<< v[j] << endl;
    }
    if(t == 26){
      printf("frase completa\n");
    }else {
      if(t >= 13){
          printf("frase quase completa\n");
      }else{
        printf("frase mal elaborada\n");
      }
    }
  }
  return 0;
}
