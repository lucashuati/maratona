#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d, c =1;
	while(scanf("%d%d",&n,&d),n+d){
		int m[d][n];
		memset(m,0,sizeof(m));
		for(int i = 0; i < d; i++){
			for(int j = 0; j < n; j++){
				scanf("%d",&m[i][j]); 
			}
		}
		bool f = false;
		//printf("Caso: %d\n", c++);
		//cout << n << " " << d << endl;
		for(int i = 0; i < n; i++){
			int soma = 0;
			for(int j = 0; j < d; j++){
				soma += m[j][i];
				//printf("[%d]", m[j][i]);
			}
			//printf(" %d != %d", soma, n);
			if(soma == d){
				f = true;
				printf("yes\n");
				break;
			}
			//printf("\n");
		}
		if(!f){
			printf("no\n");
		}
	}
	return 0;
}