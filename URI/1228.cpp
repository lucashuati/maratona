#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		vector<int> g,c;
		for(int i = 0; i < n; i++){
			int a;
			scanf("%d",&a);
			g.push_back(a);
		}
		for(int i = 0; i < n; i++){
			int a;
			scanf("%d",&a);
			c.push_back(a);
		}
		int u = 0;
		for(int i = 0; i < g.size(); i++){
			int pos;
			for(int j = 0; j < g.size(); j++){
				if(g[j] == c[i]){
					pos = j;
				}
			}
			int aux = g[pos];
			g.erase(g.begin()+pos);
			g.insert(g.begin(),aux);
			//printf("%d-%d ",i,pos);
			u += pos-i;
		}
		printf("%d\n",u);
	}	
	return 0;
}