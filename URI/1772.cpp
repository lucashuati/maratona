#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long n, k;
    while(cin >> n >> k, n+k){
        unsigned long maior = n, menor = n;
        //cout << maior << " "<< menor << endl;
        string binary = std::bitset<32>(n).to_string();
        //reverse(binary.begin(),binary.end());
        //cout << binary << endl;
        unsigned long decimal;
        for (int i = 0; i < k; i++) {
            reverse(binary.begin(),binary.end());
            int a, b;
            scanf("%d%d",&a,&b);
            char aux = binary[a];
            binary[a] = binary[b];
            binary[b] = aux;
            reverse(binary.begin(),binary.end());
            decimal = std::bitset<32>(binary).to_ulong();
            //cout << binary << " -> " << decimal << endl;
            maior = maior < decimal ? decimal : maior;
            menor = menor > decimal ? decimal : menor;
            //cout << maior << " " << menor << endl;
        }
        cout << decimal << " " << maior << " " << menor << endl;
    }
    return 0;
}
