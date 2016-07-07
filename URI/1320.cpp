#include <bits/stdc++.h>

using namespace std;

long long int teletransporte(long long int estacaoInicio, long long int estacaoTele){
	return 2*estacaoTele - estacaoInicio; 
}

int main(){
	long long int T, Q;
	scanf("%lld %lld", &T, &Q);

	vector<long long int> Tv;
	vector<long long int> Qv;
	Tv.clear();
	Qv.clear();
	
	for (int i = 0; i < T; ++i){
		long long int aux;
		scanf("%lld", &aux);
		Tv.push_back(aux);
	}
	map<long long int,long long int> mapa;
	vector<bool> visitados;
	vector<long long int> listaAd[100001];
	for (int i = 0; i < Q; ++i){
		long long int inicio, fim;
		scanf("%lld %lld", &inicio &fim);
		mapa[j] = inicio;
		visitados.clear();
		for(int j = inicio; j <= fim; j++){
			visitados.push_back(false);
		}
		for(long long int j = 2, k = 0; ;j++, k++){
			long long int x = mapa[j-1];
			if(k == Tv.size())
				k = 0;
			long long int y = teletransporte(x,Tv[k]);
			if(!visitados[y])
				visitados = true;
			mapa[j] = 

		}
			
	}

	

}