#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, l;
    scanf("%d%d%d",&n,&t,&l);
    int a = 0, b = 0;
    for(int i = 0; i < n-1; i++){
        int c;
        scanf("%d",&c);
        //  cout << c << " " << t << abs(c-t);
        if(abs(c-t) <= l){
            if(i%2 == 0)
                a+= abs(c-t);
            else
                b+= abs(c-t);
            t = c;
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}
