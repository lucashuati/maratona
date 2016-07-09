#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int v[5];
    while(scanf("%d\n",&n), n){
      for (size_t i = 0; i < n; i++) {
        scanf("%d%d%d%d%d", &v[0],&v[1],&v[2],&v[3],&v[4]);
        std::vector<int> v1;
        v1.push_back(v[0]);
        v1.push_back(v[1]);
        v1.push_back(v[2]);
        v1.push_back(v[3]);
        v1.push_back(v[4]);
        sort(v1.begin(),v1.end());
        //cout << v1[0] << v1[1] << endl;
        if(v1[1] <= 127 || v1[0] > 127)
          printf("*\n");
        else{
          if(v1[0] == v[0])
            cout << "A" << endl;
          else if(v1[0] == v[1])
            cout << "B" << endl;
          else if(v1[0] == v[2])
            cout << "C" << endl;
          else if(v1[0] == v[3])
            cout << "D" << endl;
          else if(v1[0] == v[4])
            cout << "E" << endl;
        }
      }
    }
    return 0;
}
