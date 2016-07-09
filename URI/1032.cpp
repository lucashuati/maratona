#include <bits/stdc++.h>

using namespace std;

int primos[3500];

bool primo(int a){
	int i = a/2;
	while(i > 1){
		if(a%i == 0)
			return false;
		i--;
	}
	return true;
}

void addPrimos(){
	int j= 0;
	for (int i = 2;; ++i){
		if(primo(i)){
			primos[j] = i;
			j++;
		}
		if(j == 3500)
			break;
	}
}

int main(){
	int N;
	addPrimos();
	
	while(scanf("%d",&N), N){

		vector<int> pessoas;
		for (int i = 1; i <= N; ++i){
			pessoas.push_back(i);
		}

		int m = primos[0];
		int pos = 0 + m - 1;
		int qtd = N;

		for (int i = 0; i < N-1; ++i){
			pessoas.erase(pessoas.begin()+pos);
			qtd--;
			m = primos[i+1];
			pos = ((pos-1)+m)%qtd;
		}
		cout << pessoas[0] << endl;
	}
    return 0;
}