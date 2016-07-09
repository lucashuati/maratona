#include <bits/stdc++.h>

using namespace std;
int vetor[5000] ={1};
vector<int> v;
vector<int>sortudos;
void func(){
      for(int i = 2; i < 33810  ; i++){
        v.push_back(i);
      }
      
      int n= 1, j = 0;    
      while(n != 3001){
        vector<int> aux;
        int sorte = v[0];
        sortudos.push_back(sorte);
        //cout << sorte << endl;
        int k = 1;
        for(int i = 1; i < v.size(); i++){
            if(k > sorte)
                k = 1;
            if(k%sorte != 0)
                aux.push_back(v[i]);
            k++;
        }
        v = aux;
        n++;
        j++;
      }
      
}
int main(){
    func();
    int n;
    while(scanf("%d",&n),n){
        printf("%d\n",sortudos[n-1]);
    }    
    return 0;
}