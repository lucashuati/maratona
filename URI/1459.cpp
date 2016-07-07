#include <bits/stdc++.h>

using namespace std;

typedef struct inter{
	int x,y;
}inter;

bool comp(inter a, inter b){
	return a.y < b.y;
}
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int resp = 1;
		vector<inter> limites;
		while(n--){
			inter aux;
			int x,y;
			scanf("%d %d",&aux.x, &aux.y);
			limites.push_back(aux);
		}
		sort(limites.begin(), limites.end(),comp);
		for(int i = 0; i < limites.size()-1;i++){
			if(limites[i+1].x < limites[i].y){
				limites[i+1] = limites[i];
			}else{
				resp++;
			}
		}
		printf("%d\n",resp);
	}
}