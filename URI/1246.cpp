#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,n;
    while(scanf("%d%d ",&c,&n) != EOF){
        vector <int> est(c,0);
        map<int,pair<int,int> > mm;
        int p = 0;
        while(n--){
            char ce;
            cin >> ce;
            int placa, tam;
            if(ce == 'C'){
                cin >> placa >> tam;
                for(int i = 0; i < c; i++){
                    if(est[i] == 0 && i+tam <= est.size()){
                        bool livre = true;
                        for(int j = i; j < i+tam; j++){
                            if(est[j] == 1){
                                livre = false;
                                break;
                            }
                        }
                        if(livre){
                            mm[placa] = make_pair(i,tam);
                            //printf("%d %d %d\n",placa, i, tam);
                            for(int j = i; j < i+tam; j++){
                                est[j] = 1;
                            }
                            // for(int j = 0; j < est.size(); j++){
                            //     printf("%d ",est[j]);
                            // }
                            // printf("\n");
                            p+=10;
                            break;
                        }
                    }
                }
            }else{
                cin >> placa;
                int inic = mm[placa].first;
                int mtam = mm[placa].second;
                //printf("%d %d %d\n",placa, inic, mtam);
                for(int i = inic; i < inic + mtam; i++){
                    est[i] = 0;
                }
                // for(int j = 0; j < est.size(); j++){
                //     printf("%d ",est[j]);
                // }
                // printf("\n");
            }
        }
        printf("%d\n",p);
    }
}
