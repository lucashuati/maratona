#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n), n){
		int soma = 0;
		while(n--){
			int a,b;
			scanf("%d%d",&a,&b);
			soma += (b/2);	
		}
		printf("%d\n",soma/2);
	}
	return 0;
}