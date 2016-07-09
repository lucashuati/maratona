#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    scanf("%d", &c);
    while(c--){
        int p,s;
        scanf("%d ",&s);
        vector<int> v;
        string str;
        p = 0;
        //cout << s << endl;
        while(s--){
            getline(cin,str);
            if(str == "LEFT"){
                p--;
                v.push_back(-1);
            }else if(str == "RIGHT"){
                v.push_back(1);
                p++;
            }else{
                //cout <<  << endl;
                //6
                string posa = str.substr(8,str.size()-6);
                //cout << posa << endl;
                int pos = atoi(posa.c_str());
                //cout << pos << endl;
                p += v[pos-1];
                v.push_back(v[pos-1]);
            }
        }
        cout << p << endl;
    }
    return 0;
}
