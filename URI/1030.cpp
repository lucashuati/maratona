#include <bits/stdc++.h>

using namespace std;

int main(){

	int NC,n,k;
	scanf("%d",&NC);
	for (int i = 0; i < NC; ++i){
		scanf("%d %d",&n,&k);
		int vetor[n];
		int dead = 0;
		for(int j = 0; j < n; j++){
			vetor[j] = 0;
			
		}
		for (int j = 0, count = 0; dead < n; ++j){
			if(j == n)
				j = 0;
			if(vetor[j] != 1)
				count++;
			if(count == k){
				vetor[j] = 1;
				dead++;
				if(dead == n)
					printf("Case %d: %d\n",i+1,j+1);
				count = 0;
			}
			
		}
	}
    return 0;
}