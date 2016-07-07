#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int raiz = sqrt(n);
		bool soma = false;
		for(int i = 0; i <= raiz; i++){
			for(int j = 0; j <= raiz; j++){
				if(pow(i,2) + pow(j,2) == n)
					soma = true;
			}
		}
		if(soma)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}