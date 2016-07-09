#include <bits/stdc++.h>

using namespace std;

int main(){
  int casos;
  scanf("%d\n",&casos);
  for(int i = 0; i < casos; i++){
    int pessoas;
    scanf("%d",&pessoas);
    string str;
    cin >> str;
    bool nativa = true;
    for (size_t k = 0; k < pessoas-1; k++) {
      string str1;
      cin >> str1;
      if(str != str1)
        nativa = false;
    }
    if(nativa)
      cout << str << endl;
    else
      printf("ingles\n");
  }
  return 0;
}
