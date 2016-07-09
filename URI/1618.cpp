#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        int v[10];
        for(int i = 0; i < 10;i++){
            scanf("%d",&v[i]);
        }
        // printf("%d < %d < %d\n",v[0],v[8],v[2]);
        // printf("%d < %d < %d\n",v[1],v[9],v[7]);
        if(v[0] <= v[8] && v[2] >= v[8] && v[1] <= v[9] && v[7] >= v[9]){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }

    }
    return 0;
}
