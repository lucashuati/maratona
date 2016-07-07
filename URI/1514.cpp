#include <bits/stdc++.h>

using namespace std;


int main(){
    int N, M;
    while(scanf("%d%d",&N,&M),N+M){
    	int m[100][100], contest = 0;
    	for(int i = 0; i < N; i++){
    		for(int j = 0; j < M; j++){
    			scanf("%d",&m[i][j]);
    		}
    	}
    	int regras[4] = {0,0,0,0};
    	

    	for(int i = 0; i < N; i++){
    		bool regra[4] = {false,false,false,false};
    		for(int j = 0; j < M; j++){
    			if(m[i][j] == 0)
    				regra[0] = true;
    			if(m[i][j] == 1)
    				regra[3] = true;
       		}
    		if(regra[0])
    			regras[0]++;
    		if(regra[3])
    			regras[3]++;
    	}

    	for(int i = 0; i < M; i++){
    		bool regra[4] = {false,false,false,false};
    		for(int j = 0; j < N; j++){
    			if(m[j][i] != 0)
    				regra[1] = true;
    			if(m[j][i] != 1)
    				regra[2] = true;		
    		}
    		if(regra[1])
    			regras[1]++;
    		if(regra[2])
    			regras[2]++;
    	}

    	if(regras[0] == N)
    		contest++;
    	if(regras[1] == M)
    		contest++;
    	if(regras[2] == M)
    		contest++;
    	if(regras[3] == N)
    		contest++;

    	printf("%d\n", contest);
    }

    return 0;
}