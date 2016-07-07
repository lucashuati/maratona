#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	int v[10001];
	int picos;
	while(cin >> N, N){
		picos = 0;
		for (int i = 0; i < N; ++i){
			cin >> v[i];
			if(i > 1 && i <= N-1){
				if(v[i-1] > v[i] && v[i-1] > v[i-2])
					picos++;
				if(v[i-1] < v[i] && v[i-1] < v[i-2])
					picos++;
			}
		}
		if((v[0] > v[1] && v[0] > v[N-1]) || (v[N-1] > v[N-2] && v[N-1] > v[0]))
			picos++;
		if((v[0] < v[1] && v[0] < v[N-1])  || (v[N-1] < v[N-2] && v[N-1] < v[0]))
			picos++;
		cout << picos << endl;
	}

	return 0;
}
