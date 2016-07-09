#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n), n){
        vector <int> v;
        for (int i = 0; i < n; i++) {
            int aux;
            scanf("%d",&aux);
            v.push_back(aux);
        }
        int tempo = 10;
        for(int i = 0; i < v.size()-1; i++){
            if(v[i+1] - v[i] < 10)
                tempo += v[i+1] - v[i];
            else
                tempo += 10;
        }
        printf("%d\n",tempo);
    }
    return 0;
}
