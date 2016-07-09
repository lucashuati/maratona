#include <bits/stdc++.h>

using namespace std;

int main(){
    int b,f;
    vector<int> v,v1;
    while (scanf("%d %d", &b, &f), b+f) {
        v.clear();
        for (size_t i = 0; i <= b; i++) {
            v.push_back(0);
        }
        int quants = 0;
        for (size_t i = 0; i < f; i++) {
            int x;
            scanf("%d\n",&x);
            if(v[x] == 0){
                v[x]++;
            }else if(v[x] == 1){
                quants++;
                v[x]++;
            }
        }
        cout << quants << endl;
    }
    return 0;
}
