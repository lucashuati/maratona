#include <bits/stdc++.h>

using namespace std;

int qtdPizzas[100];
int tempo[100];
int m[100][100];
int PD(int pizzas, int numItens){
	
	for(int i = 0; i <= numItens; i++){
		for(int j = 0; j <= pizzas; j++){
			if(i == 0 || j == 0)// se nao houver pizza ou nenhuma pizza a escolher
				m[i][j] = 0;
			else if(qtdPizzas[i-1] <= j){//se o numero de pizzas possiveis for maior q o numero de pizzas desse pedido
				m[i][j] = max(tempo[i-1] + m[i-1][j - qtdPizzas[i-1]], m[i-1][j]);					
			}else{
				// nao e possivel adicionar pizzas mantem o tempo com um item a menos
				m[i][j] = m[i-1][j];
			}
		}		
	}

	return m[numItens][pizzas];
}

int main(){
	
	int n, p;

	while(scanf("%d %d", &n, &p),n){
		for(int i = 0; i < n; i++){
			scanf("%d %d", &tempo[i], &qtdPizzas[i]);
		}
		printf("%d min.\n", PD(p,n));
	}
	return 0;
}