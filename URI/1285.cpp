#include <bits/stdc++.h>

using namespace std;

int main(){
	int u[10] = {0};
	char x[5];
	int v[5001] = {0};
	for(int i = 1; i <= 5000; i++){
		if(i <= 10){
			v[i] = v[i-1]+1;
		}else{
			memset(u,0,sizeof(u));
			sprintf(x,"%d",i);
			bool p = true;
			//printf("%s\n",x);
			for(int j = 0; x[j] != '\0'; j++){
				if(u[x[j]-48] == 0){
					u[x[j]-48]++;
				}else{
					p = false;
					break;
				}
			}
			if(p){
				v[i] = v[i-1]+1;
			}else{
				v[i] = v[i-1];
			}
		}
	}
	int n,m;

	while(scanf("%d%d",&n,&m) != EOF){
		printf("%d\n",v[m]-v[n-1]);
	}
	return 0;
}