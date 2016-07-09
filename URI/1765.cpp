#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int c = 1;
        int k;
        double b,B;
        while(n--){
            cin >> k >> b >> B;
            printf("Size #%d:\n",c++);
            printf("Ice Cream Used: %.2lf cm2\n",k*(((B+b)*5)/2));
        }
        printf("\n");
    }
    return 0;
}
