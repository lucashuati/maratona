#include<bits/stdc++.h>

using namespace std;
char par(char c){
  if(c == 'B')
    return 'S';
  if(c == 'S')
    return 'B';
  if(c == 'C')
    return 'F';
  if(c == 'F')
    return 'C';
}

int main(){
  string RNAA;
  while (cin >> RNAA) {
    //cout << RNAA;
    stack <char> pilha;
    int result = 0;
    for (int i = 0; i < RNAA.size(); i++) {
      if(pilha.empty())
        pilha.push(RNAA[i]);
      else{
        char Par = par(RNAA[i]);
        if(pilha.top() == Par){
          pilha.pop();
          result++;
        }else{
          pilha.push(RNAA[i]);
        }
      }
    }
    printf("%d\n",result);
  }
  return 0;
}
