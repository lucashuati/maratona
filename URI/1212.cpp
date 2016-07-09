#include <bits/stdc++.h>

using namespace std;
string s1, s2;
void completa(){
    int aux;
    if(s1.size() > s2.size()){
        aux = s1.size() - s2.size();
        for (size_t i = 0; i < aux; i++) {
            s2 += '0';
        }
    }
    else{
        aux = s2.size() - s1.size();
        for (size_t i = 0; i < aux; i++) {
            s1 += '0';
        }
    }
}
int main(){
    while(cin >> s1 >> s2){
        if(s1 == "0" && s2 == "0")
            break;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        completa();

        //cout << s1 << endl << s2 << endl;
        int carry = 0, qts = 0;
        for (int i = 0; i < s1.size(); i++) {
            if((s1[i]-48) + (s2[i]-48) + carry >= 10){
                carry = 1;
                qts++;
            }else{
                carry = 0;
            }
        }
        if(qts == 0)
            printf("No carry operation.\n");
        else if(qts == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",qts);
    }
    return 0;
}
