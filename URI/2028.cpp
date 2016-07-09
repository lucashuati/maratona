#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cases = 1;
    while(scanf("%d", &n) != EOF){
        vector<int> v;
        v.push_back(0);
        for(int i = 1; i <= n; i++ ){
            for(int j = 0; j < i; j++){
                v.push_back(i);
            }
        }
        if(v.size() == 1){
                printf("Caso %d: %lu numero\n",cases++,v.size());
        }else{
            printf("Caso %d: %lu numeros\n",cases++,v.size());
        }
        for(int i = 0; i < v.size(); i++){
            if(i == 0){
                printf("%d",v[i]);
            }else{
                printf(" %d",v[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
