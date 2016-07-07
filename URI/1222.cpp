#include <bits/stdc++.h>

using namespace std;

int main(){
	string palavra;
	int N, L, C;
	
	while(scanf("%d%d%d",&N,&L,&C) != EOF){
		int cLinhas = 1, cCaracteres = 0, cPaginas = 1;
		int tamanho;
		for(int i = 0; i < N; i++){
			cin >> palavra;
			tamanho = palavra.size();
			if((cCaracteres + tamanho) <= C){
				cCaracteres += tamanho;
				if(cCaracteres == C && i != N-1){
					cCaracteres = 0;
					if(cLinhas + 1 <= L){
						cLinhas++;
					}
					else{
						cLinhas = 1;
						cPaginas++;
					}
				}
				else{
					if(i != N-1)
						cCaracteres++;
				}
			}else{
				cCaracteres = tamanho;
				if(i != N-1)
					cCaracteres++;

				if(cLinhas + 1 <= L){
					cLinhas++;
				}
				else{
					cLinhas = 1;
					cPaginas++;
				}
			}
		}
		printf("%d\n",cPaginas);
		
	}
    return 0;
}