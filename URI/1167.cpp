#include <bits/stdc++.h>

using namespace std;

typedef struct m{
    int k;
    string n;
}player;
//par -
//impar +
int main(){
    int n;
    while(scanf("%d",&n), n){
        vector<player> v;
        for(int i = 0;i < n; i++){
            player aux;
            cin >> aux.n >> aux.k;
            v.push_back(aux);
        }
        int j = v[0].k;
        //cout << j << endl;
        int pos = 0;
        while(v.size() != 1){
            //cout << "P: " << pos << endl;
            if(j%2){
                j %= v.size(); 
                pos = (pos + j)%v.size();
            }else{
                j %= v.size();
                pos = pos - j;
                if(pos < 0)
                    pos += v.size();
            }
            
            //cout << "eliminei " << v[pos].n << " ind " << pos<< endl;
            j = v[pos].k;
            v.erase(v.begin()+pos);
            if(j%2){
                pos--;
                if(pos < 0)
                    pos += v.size();
            }else if(pos == v.size()){
                pos = 0;
            }
        }
        cout << "Vencedor(a): " << v[0].n << endl;
    }
    return 0;
}