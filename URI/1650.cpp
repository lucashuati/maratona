#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,c,cont;
	int **pintura;
	
	while(scanf("%d%d%d", &n,&m,&c), m + n + c){
		
		cont = 0;
		bool aux;
		int j;
		if(c == 1)
			aux = true;
		else
			aux = false;
		for(int i = n; i >= 8;i--){
			if(aux)
				j = m;
			else
				j = m-1;
			for(; j >= 8;j -= 2){
				
				if(i-8 >= 0 && j - 8 >= 0)
					cont++;
			}
			if(aux)
				aux = false;
			else
				aux = true;
		}	
		
		printf("%d\n",cont);
	}

    return 0;
}