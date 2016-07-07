#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,v;
	while(scanf("%d %d", &n,&v), n+v){
		int ponto = 0;
		int V = v;
		bool ok = false;
		while(V--){
			int limite = (v*(v+1)*(2*v+1))/6;
			if(limite < n){
				//cout << limite << endl;
				break;
			}else if(limite == n){
				ok = true;
				break;
			}
			ponto = 0;
			for(int i = v; i > 0; i--){
				for(int j = 0; j < i; j++){
					ponto+=i;
					//cout << ponto << endl;
					if(ponto == n){
						ok = true;
						break;
					}
				}
				if(ok)
					break;
			}
			if(ok)
				break;
			v--;	
		}	
		if(ok){
			printf("possivel\n");
		}else{
			printf("impossivel\n");
		}	
	}
	return 0;
}