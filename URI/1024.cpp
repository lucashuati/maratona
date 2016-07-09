#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    scanf("%d ",&l);
    while(l--){
        string li;
        getline(cin,li);
        for(int i = 0; i < li.size(); i++){
            if(li[i] >= 'a' && li[i] <= 'z' || li[i] >= 'A' && li[i] <= 'Z')
                li[i] += 3;
        }
        reverse(li.begin(),li.end());
        for(int i = li.size()/2; i < li.size(); i++){
            li[i]--;
        }

        cout << li << endl;
    }
    return 0;
}