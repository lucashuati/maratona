#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases--){
        double s;
        cin >> s;
        int cont = 0;
        while(s > 1.00000000000000000000000){
            s/=2;
            cont++;
        }
        printf("%d dias\n",cont);
    }
    return 0;
}
