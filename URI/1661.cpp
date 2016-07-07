#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)){
		vector<int> v;
		for (int i = 0; i < n; ++i){
			int aux;
			scanf("%d",&aux);
			v.push_back(aux);
		}
		//salto
		long long int dispesa = 0;
		for(int i = 1; i < n-1;i++){
			for (int j = 0; j < n; ++j){
				if(v[j]> 0){
					if(j-i > 0 && v[j-i] < 0){
						int custo = v[j] + v[j-i]; 
						v[j] = custo;
						dispesa += custo*i;
					}
				}
			}
		}
	}
	return 0;
}