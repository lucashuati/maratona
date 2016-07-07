#include <bits/stdc++.h>

using namespace std;;


int main(){
	int j,g;
	while(scanf("%d%d",&j,&g) != EOF){
		//cout << j << endl;
		vector<int> x,y;
		int pontos = 0;
		for(int i = 0; i < j; i ++){
			int u,v;
			scanf("%d%d ",&u,&v);
			if(u == v)
				x.push_back(u-v);
			else if(u < v)
				y.push_back(abs(u-v));
			else
				pontos+=3;
		}
		sort(y.begin(),y.end());
		for(int i = 0; i < x.size(); i++){
			if(g > 0){
				g--;
				pontos+=3;
			}else{
				pontos+=1;
			}
		}
		for(int i = 0; i < y.size(); i++){
			if(g > y[i]){
				g-=y[i]+1;
				pontos+=3;
			}else if(g == y[i]){
				g = 0;
				pontos+=1;
			}
		}
		printf("%d\n",pontos);
	}
	return 0;
}