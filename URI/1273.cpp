#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	bool inicio = true;
	while(scanf("%d", &n), n){
		if(!inicio){
			printf("\n");
		}else{
			inicio = false;
		}
		vector<string> palavras;
		int espacos = 0;
		for(int i = 0; i < n; i++){
			string aux;
			cin >> aux;
			palavras.push_back(aux);
			if(aux.size() > espacos)
				espacos = aux.size();
		}
		for (int i = 0; i < palavras.size(); ++i){
			for(int j = 0; j < espacos - palavras[i].size(); j++)
				printf(" ");
			cout << palavras[i];
			printf("\n");
		}
	}
	return 0;
}