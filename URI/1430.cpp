#include <bits/stdc++.h>

using namespace std;

int main(){
  string mus;
  map<char,double> mm;
  mm['W'] = 1.00;
  mm['H'] = (double)1/(double)2;
  mm['Q'] = (double)1/(double)4;
  mm['E'] = (double)1/(double)8;
  mm['S'] = (double)1/(double)16;
  mm['T'] = (double)1/(double)32;
  mm['X'] = (double)1/(double)64;
  while(cin >> mus, mus != "*"){
    double total = 0;
    int resp = 0;
    for(int i = 1; i < mus.size(); i++){
      //cout << mm[mus[i]] << endl;
      if(mus[i] == '/'){
        // /cout << total << endl;
        if(total == 1.00){
          resp++;
        }
        total = 0;
      }else{
        total += mm[mus[i]];
      }
    }
    cout << resp << endl;
  }
  return 0;
}
