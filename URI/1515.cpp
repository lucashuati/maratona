#include <bits/stdc++.h>

using namespace std;

typedef struct planeta{
  string nome;
  int tempo;
}planeta;

bool comp(planeta a, planeta b){
  return a.tempo < b.tempo;
}


int main(){
  int A , B , N;
  while(scanf("%d", &N), N){
    vector<planeta> v;
    for (size_t i = 0; i < N; i++) {
      planeta aux;
      cin >> aux.nome >> A >> B;
      aux.tempo = A-B;
      v.push_back(aux);
    }
    sort(v.begin(),v.end(), comp);
    cout << v[0].nome << endl;
  }
}
