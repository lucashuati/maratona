#include <bits/stdc++.h>

using namespace std;

char v[60];
int main(){
    unsigned long long x;
    int k = 10;
    for(char u = 'A'; u <= 'V'; u++){
        v[k] = u;
        k++;
    }
    while(cin >> x){
        vector<unsigned long long> xs;
        if(x == 0)
            xs.push_back(0);
        while(x != 0){
            xs.push_back(x%32);
            x /= 32;
        }
        for(int i = xs.size()-1; i >=  0; i--){
            if(xs[i] <= 9)
                printf("%llu",xs[i]);
            else
                printf("%c",v[xs[i]]);
        }
        printf("\n");
    }
    return 0;
}
