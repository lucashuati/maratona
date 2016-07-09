#include <bits/stdc++.h>

using namespace std;

int main(){
  int par, caso = 1;
  string line;

  while(scanf("%d",&par) != EOF){
    if(caso != 1)
      printf("\n");
    getline(cin,line);
    int qtd = 0, masc = 0, fem = 0;
    getline(cin,line);
    string num = "2001, A Space Odyssey";
    string::size_type sz;
    for (size_t i = 0; i < line.size(); i++) {
      // /cout << num << endl;
      int tam = stoi (num,&sz);
      char sex;
      if(line[i] >= '0' && line[i] <= '9'){
        if(line[i+1] >= '0' && line[i+1] <= '9'){
          num = line[i];
          num += line[i+1];
          i++;
        }else{
          num = line[i];
        }
      }else{
        if(line[i] != ' '){
          sex = line[i];
          //printf("%d(tam) == %d(par) ? && %c(sex) == M || F\n",tam,par,sex);
          if(tam == par && sex == 'M'){
            masc++;
            qtd++;
          }
          if(tam == par && line[i] == 'F'){
            fem++;
            qtd++;
          }
        }
      }

    }
    printf("Caso %d:\n",caso);
    printf("Pares Iguais: %d\n", qtd);
    printf("F: %d\nM: %d\n",fem,masc);
    caso++;

  }
  return 0;
}
