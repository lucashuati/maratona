#include <bits/stdc++.h>

using namespace std;
vector<string> v;
int n,m;
void env(int i, int j){
    if(i-1 >= 0 && v[i-1][j] == 'A'){
        v[i-1][j] = 'T';
        env(i-1,j);
    }
    if(j-1 >= 0 && v[i][j-1] == 'A'){
        v[i][j-1] = 'T';
        env(i,j-1);
    }
    if(i+1 < n && v[i+1][j] == 'A'){
        v[i+1][j] = 'T';
        env(i+1,j);
    }
    if(j+1 < m && v[i][j+1] == 'A'){
        v[i][j+1] = 'T';
        env(i,j+1);
    }
}

int main(){

    while(scanf("%d%d ",&n,&m), n+m){
        v.clear();
        for(int i =0;i < n;i++){
            string a;
            cin >> a;
            v.push_back(a);
        }

        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                if(v[i][j] == 'T'){
                    env(i,j);
                }
            }
        }
        //cout << n << " " << m << endl;
        for(int i = 0; i < n; i++){
            cout << v[i] << endl;
        }
        cout << endl;
    }

    return 0;
}
