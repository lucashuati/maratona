#include <bits/stdc++.h>

using namespace std;

int main(){

	int N,M,aux,volume;
	vector<int> produto, caixa, possiveis, volumes;
	
	while(scanf("%d", &N), N){
		
		int q = 1;
		produto.clear();
		possiveis.clear();
		volumes.clear();
		scanf("%d%d", &M, &aux);
		produto.push_back(aux);
		scanf("%d", &aux);
		produto.push_back(aux);
		scanf("%d", &aux);
		produto.push_back(aux);
		volume = produto[0]*produto[1]*produto[2];
		sort(produto.begin(),produto.end());

		for (int i = 0; i < M; ++i){
			caixa.clear();
			scanf("%d",&aux);
			caixa.push_back(aux);
			scanf("%d",&aux);
			caixa.push_back(aux);
			scanf("%d",&aux);
			caixa.push_back(aux);
			sort(caixa.begin(),caixa.end());
			
			if(caixa[0] >= produto[0] && caixa[1] >= produto[1] && caixa[2] >= produto[2]){
				possiveis.push_back(caixa[0]);
				possiveis.push_back(caixa[1]);
				possiveis.push_back(caixa[2]);	
			}
		}

		for (int i = 0; i+2 < possiveis.size(); i = i+3){
			for (int j = i + 3; j+2 < possiveis.size(); j = j + 3){
				if(possiveis[i] == possiveis[j] && possiveis[i+1]  == possiveis[j+1] && possiveis[i+2]  == possiveis[j+2])
					q++;
			}
			if(q >= N)
				volumes.push_back(possiveis[i]*possiveis[i+1]*possiveis[i+2]);
			q = 1;
		}

		sort(volumes.begin(),volumes.end());
		if(volumes.size() == 0)
			printf("impossible\n");
		else
			printf("%d\n",volumes[0]-volume);
		
	}
			
    return 0;
}