#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    while(cin >> n,n){
        set <long long int> ms;
        for(int i = 0; i < n; i++){
            long long int x;
            scanf("%lld",&x);
            if(ms.find(x) == ms.end()){
                ms.insert(x);
            }else{
                ms.erase(x);
            }
        }
        cout << *ms.begin() << endl;
    }

}
