#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,k;
	while(scanf("%d%d", &m,&k) != EOF){
		vector<int> mus, visitado;
		int qtd = m;
		int tempo = 0;
		mus.clear();
		for(int i = 0; i < m; i++){
			int aux;
			scanf("%d", &aux);
			mus.push_back(aux);
			visitado.push_back(0);		
		}
		for(int i = 0; i < k; i++){
			int aux;
			scanf("%d", &aux);
			if(qtd != 0){
				tempo += mus[aux-1];			
			}				 			
			if(visitado[aux-1] == 0){
				visitado[aux-1] = 1;
				qtd--;			
			}
						
		}
		if(qtd == 0)
			printf("%d\n",tempo);
		else
			printf("-1\n");	
	}	
	return 0;
}