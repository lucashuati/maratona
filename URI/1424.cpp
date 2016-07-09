#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, vector<int> > mm;

    int n,m;
    while(scanf("%d%d ",&n,&m) != EOF){
        mm.clear();
        for(int i = 0; i < n;i++){
            int u;
            scanf("%d",&u);
            mm[u].push_back(i+1);
        }
        while(m--){
            int k,va;
            scanf("%d%d",&k,&va);
            //cout << k << " " << va << endl;

            if(mm[va].size() >= k){
                cout << mm[va][k-1] << endl;
            }else{
                cout << 0 << endl;
            }

        }
    }
    return 0;
}
