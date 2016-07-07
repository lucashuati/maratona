#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n),n){
		vector<int> x,y;
		for(int i = 0; i < n; i++){
			int aux;
			scanf("%d",&aux);
			x.push_back(aux);
		}
		int cont = 0;
		bool so_zero = true;
		for(int i = 0; i < x.size(); i++){
			if(x[i] == 1)
				so_zero = false;
			if(x[i] != 0 && cont != 0){
				y.push_back(cont);
				cont = 0;
			}else if(x[i] == 0){
				cont++;
			}
		}
		if(cont != 0)
			y.push_back(cont);
		if(y.size() > 1 && x[0] == x[x.size()-1] && x[0] == 0){
			y[0] += y[y.size()-1];
			y.pop_back();
		}
		int r = 0;	
		if(so_zero && y[0]%2 != 0){
			r =1;
		}
		for(int i = 0; i < y.size(); i++){
			//printf("%d ",y[i]);
			r += (y[i]*2)/4;
		}
		printf("%d\n",r);
	}
	return 0;
}