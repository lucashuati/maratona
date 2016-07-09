#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    map<string,double> mm;
    scanf("%d",&cases);
    while(cases--){
        int valores, produtos;
        scanf("%d\n",&valores);
        for (size_t i = 0; i < valores; i++) {
            string str; double v;
            cin >> str >> v;
            mm[str] = v;
        }
        double value = 0;
        scanf("%d\n",&produtos);
        for (size_t i = 0; i < produtos; i++) {
            string str; double q;
            cin >> str >> q;
            value += mm[str]*q;
        }
        printf("R$ %.2lf\n",value);
        //cout << "R$ "<< value << endl;
    }
    return 0;
}
