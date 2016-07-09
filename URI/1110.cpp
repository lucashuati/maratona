#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(scanf("%d", &n), n){
    queue<int> baralho;
    for (size_t i = 1; i <= n; i++) {
      baralho.push(i);
    }
    cout << "Discarded cards:";
    bool first = true;
    while(baralho.size() > 1){
      if(first){
        cout << " " << baralho.front();
        first = false;
      }else{
        cout << ", " << baralho.front();
      }
      baralho.pop();
      int aux;
      aux = baralho.front();
      baralho.push(aux);
      baralho.pop();
    }

    cout << endl << "Remaining card: " << baralho.front() << endl;

  }
  return 0;
}