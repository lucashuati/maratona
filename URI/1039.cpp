#include <bits/stdc++.h>

using namespace std;

int main(){
  int r1,x1,y1,r2,x2,y2;
  double dist;
  while (scanf("%d%d%d%d%d%d", &r1,&x1,&y1,&r2,&x2,&y2)!= EOF ) {
    dist = (x2-x1)*(x2-x1);
    //cout << dist << endl;
    dist += (y2-y1)*(y2-y1);
    //cout << dist << endl;
    dist = sqrt(dist);
    //cout << dist << endl;
    if(r2 > r1)
      cout << "MORTO" << endl;
    else{
      if(r2 == r1){
        if(x1 == x2 && y1 == y2){
          cout << "RICO" << endl;
        }else{
          cout << "MORTO" << endl;
        }
      }else{
        if(dist <= r1 - r2){
          cout << "RICO" << endl;
        }else
          cout << "MORTO" << endl;
      }
    }
  }
  return 0;
}
