#include <bits/stdc++.h>

using namespace std;
std::vector<int> listaAd[10001];
std::vector<int> naLista;
int zerar(int n){
	naLista.clear();
	for(int i = 0; i <= n; i++)
		naLista.push_back(0);

	for(int i = 0 ; i <= n; i++){
		listaAd[i].clear();
	}
}
void print_vector(vector<int> v){
	sort(v.begin(), v.end());
	bool zero = true;
	bool first = true;
	for (int i = 0; i < v.size(); ++i){
		if(first){
			if(naLista[v[i]]){
				first = false;
				zero = false;
				cout << v[i];
			}
		}else{
			if(naLista[v[i]]){
				zero = false;
				cout << " " <<v[i];
			}
		}	
	}

	if(zero)
		cout << "0" << endl;
	else
		cout << endl;
	
}

int main(){
	int N,M,K;
	while(scanf("%d%d%d",&N, &M, &K) != EOF){
		zerar(N);
		for (int i = 0; i < M; ++i){
			int u, v;
			scanf("%d %d", &u, &v);
			listaAd[u].push_back(v);
			listaAd[v].push_back(u);
		}
		vector<int> lista;
		for (int i = 1; i <= N; ++i){
			if(listaAd[i].size() >= K){
				lista.push_back(i);
				naLista[i] = 1;
			}
		}
		//print_vector(lista);
		bool altera_lista = true;
		while(altera_lista){
			altera_lista = false;
			for (int i = 0; i < lista.size(); ++i){
				int cont = 0;
				if(naLista[lista[i]] == 0)
					continue;
				for (int j = 0; j < listaAd[lista[i]].size(); ++j){
					if(naLista[listaAd[lista[i]][j]] == 1)
						cont++;
				}
				if(cont < K){
					//cout << lista[i] << endl;
					naLista[lista[i]] = 0;
					altera_lista = true;
					break;
				}	
			}
			//cout << lista.size() << endl;
		}
		print_vector(lista);
	}
	return 0;
}