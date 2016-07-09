#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    while(scanf("%d%d",&n,&m), n+m){
        int A[10001] = {0};
        int B[10001] = {0};
        set<int> a,b,c;
        for(int i = 0; i < n; i++){
            int aux;
            scanf("%d",&aux);
            A[aux] = 1;
            a.insert(aux);
            c.insert(aux);
        }

        for(int i = 0; i < m; i++){
            int aux;
            scanf("%d",&aux);
            B[aux] = 1;
            b.insert(aux);
            c.insert(aux);
        }
        int x = c.size()-a.size();
        int y = c.size()-b.size();
        printf("%d\n",min(x,y));
    }
    return 0;
}