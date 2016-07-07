#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,d;
	while(scanf("%d%d",&a,&d),a+d){
		vector<int> aa,dd;
		for(int i = 0; i < a; i++){
			int dist;
			scanf("%d",&dist);
			aa.push_back(dist);
		}
		for(int i = 0; i < d; i++){
			int dist;
			scanf("%d",&dist);
			dd.push_back(dist);
		}
		sort(dd.begin(),dd.end());
		bool ok = true;
		for(int i = 0; i < aa.size(); i++){
			if(aa[i] < dd[1]){
				ok = false;
				break;
			}
		}
		if(ok){
			printf("N\n");
		}else{
			printf("Y\n");
		}
	}
	return 0;
}