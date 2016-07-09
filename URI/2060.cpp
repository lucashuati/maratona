#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int v[4] = {0};
	while(n--){
		int k;
		scanf("%d",&k);
		if(k%2 == 0){
			v[0]++;
		}
		if(k%3 == 0){
			v[1]++;
		}
		if(k%4 == 0){
			v[2]++;
		}
		if(k%5 == 0){
			v[3]++;
		}
	}
	printf("%d Multiplo(s) de 2\n",v[0]);
	printf("%d Multiplo(s) de 3\n",v[1]);
	printf("%d Multiplo(s) de 4\n",v[2]);
	printf("%d Multiplo(s) de 5\n",v[3]);
	return 0;
}