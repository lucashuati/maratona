#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d\n",&n),n){
        map<string,int> mm;
        string str;
        int p;
        for (int i = 0; i < n; i++) {
            cin >> str >> p;
            //v.push_back(a);
            mm[str] = p;
        }
        string str1, str2;
        char c;
        int x,y;
        for(int i = 0; i < n/2; i++){
            cin >> str1 >> x >> c >> y >> str2;
            int t1,t2;
            t1 = x*3;
            t2 = y*3;
            if(x > y){
                t1 += 5;
            }else if(x == y){
                t1 += 1;
                t2 += 1;
            }else{
                t2 += 5;
            }
            mm[str1] += t1;
            mm[str2] += t2;
        }
        int maior = -1;
        string smaior;
        for(map<string,int>::iterator i = mm.begin(); i != mm.end(); i++){
            if(i->second > maior){
                maior = i->second;
                smaior = i->first;
            }
        }
        if(smaior == "Sport"){
            printf("O Sport foi o campeao com %d pontos :D\n\n",maior);
        }else{
            printf("O Sport nao foi o campeao. O time campeao foi o %s com %d pontos :(\n\n", smaior.c_str(), maior);
        }
    }
    return 0;
}
