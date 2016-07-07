#include <bits/stdc++.h>

using namespace std;

vector<int> la[10050];
int retirados[10050];
int total;

int retira(int u){
	vector<int> aux;
	for(int i = 0; i < la[u].size();i++){
		if(!retirados[la[u][i]]){
			retirados[la[u][i]] = 1;
			total--;
		}
		for(int j = 0; j < la[i].size(); j++){
			if(!retirados[la[u][i]]){
				aux.push_back(la[i][j]);
			}
			
		}
	}
	la[u] = aux;
}
int main(){
	int n;
	while(scanf("%d",&n), n != -1){

		memset(retirados,0,sizeof(retirados));
		for(int i = 1; i <= n; i++){
			la[i].clear();
		}
		for(int i = 1; i < n; i++){
			int a;
			scanf("%d",&a);
			la[i+1].push_back(a);
			la[a].push_back(i+1);
		}
		int anos = 0;
		total = n;
		//cout << total << endl;
		int u = -1, vu = -1;
		while(total > 1){
			u = -1;vu = -1;
			for(int j = 1; j <= n; j++){
				//cout << la[j].size() << " " << vu << endl;
				int k = la[j].size();
				if(k > vu){	
					vu = la[j].size();
					u = j;
				}
			}
			//cout << u << endl;
			//total--;
			retira(u);
			anos++;
		}
		//cout << endl;
		printf("%d\n",anos);
	}
	return 0;
}