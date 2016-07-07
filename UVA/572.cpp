#include <bits/stdc++.h>

using namespace std;

int I,J;
char matriz[1000][1000];

void percore(int i, int j){
	if(matriz[i][j] == '*'){
		return;
	}else
		matriz[i][j] = '*';
	if(i-1 >= 0){
		percore(i-1,j);
	}
	if(j-1 >= 0){
		percore(i,j-1);
	}
	if(i+1 < I){
		percore(i+1,j);
	}
	if(j+1 < J){
		percore(i,j+1);
	}
	if(i-1 >= 0 && j-1 >= 0){
		percore(i-1,j-1);
	}
	if(i-1 >= 0 && j+1 < J){
		percore(i-1,j+1);
	}
	if(i+1 < I && j-1 >= 0){
		percore(i+1,j-1);
	}
	if(i+1 < I && j+1 < J){
		percore(i+1,j+1);
	}
}

int main(){
	while(scanf("%d%d ",&I,&J),I+J){
		for(int i = 0; i < I; i++){
			for(int j = 0; j < J; j++){
				cin >> matriz[i][j];
				// /scanf("%c",&matriz[i][j]);
			}
		}
		int cont = 0;
		for(int i = 0; i < I; i++){
			for(int j = 0; j < J; j++){
				if(matriz[i][j] == '@'){
					percore(i,j);
					cont++;
				}
			}
		}
		printf("%d\n",cont);
	}
	return 0;
}