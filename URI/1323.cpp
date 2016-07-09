#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	while(scanf("%d", &n), n){
		int total = 0;
		for (int i = 1; i <= n; ++i){
			total += pow(i,2);
		}
		printf("%d\n", total);
	}
}