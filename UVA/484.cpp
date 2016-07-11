#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    vector<int> v;
    while(cin >> a){
        v.push_back(a);
    }
    for(int i = 0; i < v.size();i++){
        int cont = 1;
        if(v[i] == 999999)
            continue;
        for(int j = i+1; j < v.size(); j++){
            if(v[i] == v[j]){
                cont++;
                v[j] = 999999;
            }
        }
        printf("%d %d\n",v[i],cont );
        cont = 1;
    }
    return 0;
}
