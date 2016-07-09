#include <bits/stdc++.h>

using namespace std;

int modulo(int a){
	return (a>0? a:-a); 
}

void print(vector<int> v){
	for(int i = 0; i < v.size();i++){
		printf("%d ",v[i]);
	}	
	printf("\n");
}
int main(){
	int n;
	vector<int> vendedores, compradores, cidade;
	while(scanf("%d",&n),n){
		compradores.clear();
		vendedores.clear();
		cidade.clear();
		for(int i = 0; i < n; i++){
			int x;
			scanf("%d",&x);
			if(x > 0){
				cidade.push_back(x);
				vendedores.push_back(i);				
			}else{
				cidade.push_back(-x);
				compradores.push_back(i);
			}			
		}
		long long int resp = 0;		
		for(int i = 0, j = 0; i < vendedores.size(); i++){
			while(cidade[vendedores[i]] > 0){
				int x = min(cidade[compradores[j]],cidade[vendedores[i]]);
				cidade[compradores[j]] -= x; cidade[vendedores[i]] -= x;
				int custo = modulo(compradores[j]-vendedores[i]);
				resp += custo*x;
				if(cidade[compradores[j]] <= 0)
					j++;
			}
		}
		printf("%lld\n",resp);	
	}	
	return 0;
}