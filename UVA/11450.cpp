#include <bits/stdc++.h>

using namespace std;


int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int g, money, k, M, C;
		int preco[25][25]; //[C][P]
		bool possivel[25][210];
		scanf("%d%d",&M,&C);
		for (int i = 0; i < C; ++i){
			scanf("%d",&preco[i][0]);
			for (int j = 1; j <= preco[i][0]; ++j){
				scanf("%d",&preco[i][j]);
			}
		}
		memset(possivel, false, sizeof(possivel));
		for (int i = 1; i <= preco[0][0]; ++i){
			possivel[0][M-preco[0][i]] = true;
		}

		for (int i = 1; i < C; ++i){
			for (int j = 0; j <= M; ++j){
				if(possivel[i-1][j]){
					for(int k = 1; k <= preco[i][0]; k++){
						if(j - preco[i][k] >= 0){
							possivel[i][j-preco[i][k]] = true;
						}
					}
				}
			}
		}

		int result = 0;
		for(result = 0; result <= M && !possivel[C-1][result]; ++result);
			

		if(result > M)
			printf("no solution\n");
		else
			printf("%d\n", M-result);
		
		
	}
	return 0;
}