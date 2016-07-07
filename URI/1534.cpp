#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	int matriz[70][70];
	while(scanf("%d",& N) != EOF){
		
		for(int i = 0; i < N; i++){
			for(int j =0; j < N; j++)
				matriz[i][j] = 3;
		}

		for(int i = 0; i < N; i++){
			matriz[i][i] = 1;
			matriz[i][(N-1)-i] = 2; 
		}

		for(int i = 0; i < N; i++){
			for(int j =0; j < N; j++)
				printf("%d", matriz[i][j]);
			printf("\n");
		}

	}
    return 0;
}