#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n;
  scanf("%lld",&n);
  std::vector<long long int> v;
  while(1){
    if(n/16 == 0){
      v.push_back(n%16);
      break;
    }
    v.push_back(n%16);
    n /= 16;
  }
  //cout << v[0] << endl;
  for(int i = v.size()-1; i >= 0; i--){
    if(v[i] == 10){
      printf("A");
    }
    if(v[i] == 11){
      printf("B");
    }
    if(v[i] == 12){
      printf("C");
    }
    if(v[i] == 13){
      printf("D");
    }
    if(v[i] == 14){
      printf("E");
    }
    if(v[i] == 15){
      printf("F");
    }
    if(v[i] < 10)
      printf("%lld",v[i]);
  }
  printf("\n");
  return 0;
}
