#include <bits/stdc++.h>

using namespace std;

int main(){
  string line;
  while (getline(cin,line)) {
    int italic = 0, bold = 0;
    for (size_t i = 0; i < line.size(); i++) {
      if(line[i] == '_'){
        italic++;
        if(italic%2 != 0)
          printf("<i>");
        else
          printf("</i>");
      }else{
        if(line[i] == '*'){
          bold++;
          if(bold%2 != 0)
            printf("<b>");
          else
            printf("</b>");
        }else{
          printf("%c",line[i]);
        }
      }
    }
    printf("\n");
  }
  return 0;
}
