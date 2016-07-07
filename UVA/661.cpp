#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c,s=1;
	vector<int> amperagem;
	vector<int> estado;
	while(scanf("%d %d %d", &n, &m, &c), n+m+c){
		amperagem.clear();
		estado.clear();
		for(int i = 0; i < n; i++){
			int aux;
			scanf("%d", &aux);
			amperagem.push_back(aux);
			estado.push_back(0);
		}
		int maximo = 0, atual = 0;
		for(int i = 0; i < m; i++){
			int aux;
			scanf("%d",&aux);
			if(estado[aux-1] == 0){
				estado[aux-1] = 1;
				atual += amperagem[aux-1];
				maximo = max(maximo,atual);
			}else{
				estado[aux-1] = 0;
				atual -= amperagem[aux-1];
			}
		}
		if(maximo > c){
			printf("Sequence %d\n",s);
			printf("Fuse was blown.\n");
		}else{
			printf("Sequence %d\n",s);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n", maximo);
		}
		printf("\n");
		s++;
	}
	return 0;
}