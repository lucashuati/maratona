#include <bits/stdc++.h>

using namespace std;

int main(){
    string line;
    while(getline(cin,line), line != "*"){
        char k = line[0], K;
        int dif = 'a' - 'A';
        if(k >= 'a' && k <= 'z'){
            K = k-dif;
        }else{
            K = k+dif;
        }
        //cout << k << K << endl;
        bool noot = false;
        for(int i = 0; i < line.size(); i++){
            if(line[i] == ' '){
                if(line[i+1] != K && line[i+1] != k){
                    noot = true;
                }
            }
        }
        if(noot)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
