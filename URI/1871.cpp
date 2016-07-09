#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long x, y;
    while(cin >> x >> y,x+y){
        char s[50];
        sprintf(s,"%llu",x+y);
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] != '0')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
