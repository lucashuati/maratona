#include <bits/stdc++.h>

using namespace std;

int main(){
    int B, N;
    while(scanf("%d%d",&B,&N), B+N){
        vector<int> reservas;
        for(int i = 0 ; i < B; i++){
            int aux;
            scanf("%d",&aux);
            reservas.push_back(aux);
        }
        bool ok = true;
        for(int i = 0; i < N; i++){
            int d,c,v;
            scanf("%d%d%d",&d,&c,&v);
            reservas[c-1] += v;
            reservas[d-1] -= v;
        }
        for(int i = 0; i < reservas.size(); i++){
            
            if(reservas[i] < 0){
                ok = false;
                break;
            }
        }
        if(ok)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
