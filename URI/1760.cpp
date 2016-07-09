#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    while(scanf("%lf",&n) != EOF){
        double A = ((n*n)*sqrt(3))/2;
        printf("%.2lf\n",(8*A)/10);
    }

    return 0;
}
